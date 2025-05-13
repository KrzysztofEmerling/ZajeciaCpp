#include <iostream>
#include <sstream>
#include <string>

using String = std::string;

enum Pieces
{
    Empty,
    WhitePawns,
    WhiteKnights,
    WhiteBishops,
    WhiteRooks,
    WhiteQueens,
    WhiteKing,

    BlackPawns,
    BlackKnights,
    BlackBishops,
    BlackRooks,
    BlackQueens,
    BlackKing
};
struct Flags
{
    bool whiteOnMove;
    bool whiteShortCastelRights;
    bool whiteLongCastelRights;
    bool blackShortCastelRights;
    bool blackLongCastelRights;
};

String SaveFEN(const Flags flags, const int board[8][8])
{
    std::stringstream fen;

    // Piece placement
    for (int rank = 7; rank >= 0; --rank)
    {
        int empty = 0;
        for (int file = 0; file < 8; ++file)
        {
            int square = rank * 8 + file;
            bool found = false;
            if (board[rank][file] != Pieces::Empty)
            {
                if (empty > 0)
                {
                    fen << empty;
                    empty = 0;
                }
                switch (board[rank][file])
                {
                case WhitePawns:
                    fen << 'P';
                    break;
                case WhiteKnights:
                    fen << 'N';
                    break;
                case WhiteBishops:
                    fen << 'B';
                    break;
                case WhiteRooks:
                    fen << 'R';
                    break;
                case WhiteQueens:
                    fen << 'Q';
                    break;
                case WhiteKing:
                    fen << 'K';
                    break;
                case BlackPawns:
                    fen << 'p';
                    break;
                case BlackKnights:
                    fen << 'n';
                    break;
                case BlackBishops:
                    fen << 'b';
                    break;
                case BlackRooks:
                    fen << 'r';
                    break;
                case BlackQueens:
                    fen << 'q';
                    break;
                case BlackKing:
                    fen << 'k';
                    break;
                }
                found = true;
            }

            if (!found)
            {
                ++empty;
            }
        }
        if (empty > 0)
            fen << empty;
        if (rank > 0)
            fen << '/';
    }
    fen << ' ' << (flags.whiteOnMove ? 'w' : 'b');

    fen << ' ';
    bool anyCastling = false;
    if (flags.whiteShortCastelRights)
    {
        fen << 'K';
        anyCastling = true;
    }
    if (flags.whiteLongCastelRights)
    {
        fen << 'Q';
        anyCastling = true;
    }
    if (flags.blackShortCastelRights)
    {
        fen << 'k';
        anyCastling = true;
    }
    if (flags.blackLongCastelRights)
    {
        fen << 'q';
        anyCastling = true;
    }
    if (!anyCastling)
    {
        fen << '-';
    }

    fen << ' ';

    // Pominołem enpassanta
    fen << '-';

    // Pominołem wczytywanie ruchów
    fen << ' ' << static_cast<int>(0);
    fen << ' ' << static_cast<int>(0);

    return fen.str();
}

int main()
{

    int board[8][8] = {
        {BlackRooks, BlackKnights, BlackBishops, BlackQueens, BlackKing, BlackBishops, BlackKnights, BlackRooks},
        {BlackPawns, BlackPawns, BlackPawns, BlackPawns, BlackPawns, BlackPawns, BlackPawns, BlackPawns},
        {Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty},
        {Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty},
        {Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty},
        {Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty},
        {WhiteRooks, WhiteKnights, WhiteBishops, WhiteQueens, WhiteKing, WhiteBishops, WhiteKnights, WhiteRooks},
        {WhitePawns, WhitePawns, WhitePawns, WhitePawns, WhitePawns, WhitePawns, WhitePawns, WhitePawns}};

    Flags flags = {true, true, true, true, true};

    std::cout << SaveFEN(flags, board) << std::endl;
}