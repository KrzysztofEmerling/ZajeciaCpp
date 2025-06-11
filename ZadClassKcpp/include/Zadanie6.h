#include "Zadanie.h"

#ifndef ZADANIE6
#define ZADANIE6

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

class Zadanie6 : public Zadanie
{
private:
    String SaveFEN(const Flags flags, const int board[8][8]);

public:
    Zadanie6();
    void Present() override;
};

#endif