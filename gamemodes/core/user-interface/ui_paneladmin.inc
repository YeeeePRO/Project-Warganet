//Tambahkan field ini di enum player gamemode kalian
/*
    pAdminTarget,
*/

//Tambahkan Variable baru yaitu
/*
new AdminPanelInputID[MAX_PLAYERS];
*/

#include <YSI_Coding\y_hooks>

new PlayerText: AdminPanel[MAX_PLAYERS][80];

CreateAdminPanelTD(playerid)
{
    AdminPanel[playerid][0] = CreatePlayerTextDraw(playerid, 219.000, 85.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][0], 216.000, 283.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][0], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][0], 707406591);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][0], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][0], 1);

    AdminPanel[playerid][1] = CreatePlayerTextDraw(playerid, 216.000, 75.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][1], 19.000, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][1], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][1], 707406591);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][1], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][1], 1);

    AdminPanel[playerid][2] = CreatePlayerTextDraw(playerid, 419.000, 75.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][2], 19.000, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][2], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][2], 707406591);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][2], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][2], 1);

    AdminPanel[playerid][3] = CreatePlayerTextDraw(playerid, 216.000, 357.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][3], 19.000, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][3], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][3], 707406591);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][3], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][3], 1);

    AdminPanel[playerid][4] = CreatePlayerTextDraw(playerid, 419.000, 357.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][4], 19.000, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][4], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][4], 707406591);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][4], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][4], 1);

    AdminPanel[playerid][5] = CreatePlayerTextDraw(playerid, 225.000, 78.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][5], 203.000, 295.500);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][5], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][5], 707406591);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][5], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][5], 1);

    AdminPanel[playerid][6] = CreatePlayerTextDraw(playerid, 217.000, 76.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][6], 19.000, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][6], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][6], -726714369);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][6], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][6], 1);

    AdminPanel[playerid][7] = CreatePlayerTextDraw(playerid, 418.000, 76.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][7], 19.000, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][7], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][7], -726714369);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][7], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][7], 1);

    AdminPanel[playerid][8] = CreatePlayerTextDraw(playerid, 217.000, 356.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][8], 19.000, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][8], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][8], 336860415);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][8], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][8], 1);

    AdminPanel[playerid][9] = CreatePlayerTextDraw(playerid, 418.000, 356.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][9], 19.000, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][9], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][9], 336860415);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][9], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][9], 1);

    AdminPanel[playerid][10] = CreatePlayerTextDraw(playerid, 220.000, 87.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][10], 213.500, 279.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][10], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][10], 336860415);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][10], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][10], 1);

    AdminPanel[playerid][11] = CreatePlayerTextDraw(playerid, 226.000, 79.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][11], 201.000, 293.500);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][11], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][11], 336860415);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][11], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][11], 1);

    AdminPanel[playerid][12] = CreatePlayerTextDraw(playerid, 226.000, 79.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][12], 201.000, 18.500);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][12], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][12], -726714369);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][12], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][12], 1);

    AdminPanel[playerid][13] = CreatePlayerTextDraw(playerid, 220.000, 86.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][13], 213.500, 18.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][13], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][13], -726714369);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][13], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][13], 1);

    AdminPanel[playerid][14] = CreatePlayerTextDraw(playerid, 225.000, 87.000, "ADMIN PANEL");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][14], 0.209, 1.098);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][14], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][14], 437918463);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][14], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][14], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][14], 1);

    AdminPanel[playerid][15] = CreatePlayerTextDraw(playerid, 414.000, 84.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][15], 15.500, 16.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][15], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][15], -726714369);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][15], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][15], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][15], 1);

    AdminPanel[playerid][16] = CreatePlayerTextDraw(playerid, 422.000, 87.000, "X");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][16], 0.180, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][16], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][16], 437918463);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][16], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][16], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][16], 1);

    AdminPanel[playerid][17] = CreatePlayerTextDraw(playerid, 252.000, 114.000, "PLAYER ID / NAME");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][17], 0.180, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][17], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][17], -1701143809);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][17], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][17], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][17], 1);

    AdminPanel[playerid][18] = CreatePlayerTextDraw(playerid, 225.000, 129.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][18], 179.500, 16.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][18], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][18], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][18], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][18], 1);

    AdminPanel[playerid][19] = CreatePlayerTextDraw(playerid, 225.500, 130.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][19], 178.500, 15.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][19], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][19], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][19], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][19], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][19], 1);

    AdminPanel[playerid][20] = CreatePlayerTextDraw(playerid, 407.500, 130.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][20], 21.500, 15.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][20], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][20], -726714369);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][20], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][20], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][20], 1);

    AdminPanel[playerid][21] = CreatePlayerTextDraw(playerid, 418.000, 133.000, "SET");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][21], 0.180, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][21], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][21], 437918463);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][21], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][21], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][21], 1);

    AdminPanel[playerid][22] = CreatePlayerTextDraw(playerid, 230.000, 133.000, "Masukkan ID...");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][22], 0.150, 0.799);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][22], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][22], -522133249);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][22], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][22], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][22], 1);

    AdminPanel[playerid][23] = CreatePlayerTextDraw(playerid, 225.000, 152.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][23], 179.500, 16.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][23], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][23], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][23], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][23], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][23], 1);

    AdminPanel[playerid][24] = CreatePlayerTextDraw(playerid, 225.500, 153.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][24], 178.500, 15.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][24], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][24], 437918463);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][24], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][24], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][24], 1);

    AdminPanel[playerid][25] = CreatePlayerTextDraw(playerid, 230.000, 155.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][25], 5.000, 6.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][25], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][25], -726714369);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][25], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][25], 1);

    AdminPanel[playerid][26] = CreatePlayerTextDraw(playerid, 231.000, 156.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][26], 3.000, 4.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][26], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][26], 437918463);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][26], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][26], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][26], 1);

    AdminPanel[playerid][27] = CreatePlayerTextDraw(playerid, 230.500, 161.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][27], 4.000, 4.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][27], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][27], -726714369);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][27], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][27], 1);

    AdminPanel[playerid][28] = CreatePlayerTextDraw(playerid, 230.800, 161.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][28], 4.000, 4.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][28], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][28], 437918463);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][28], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][28], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][28], 1);

    AdminPanel[playerid][29] = CreatePlayerTextDraw(playerid, 233.000, 160.500, "V");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][29], 0.159, 0.598);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][29], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][29], -726714369);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][29], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][29], 2);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][29], 1);

    AdminPanel[playerid][30] = CreatePlayerTextDraw(playerid, 240.000, 156.000, "Target terpilih:");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][30], 0.150, 0.799);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][30], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][30], -1061109505);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][30], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][30], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][30], 1);

    AdminPanel[playerid][31] = CreatePlayerTextDraw(playerid, 279.000, 156.000, "ID 0 - Player Name");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][31], 0.150, 0.799);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][31], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][31], -726714369);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][31], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][31], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][31], 1);

    AdminPanel[playerid][32] = CreatePlayerTextDraw(playerid, 226.000, 176.000, "PUNISHMENT");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][32], 0.159, 0.799);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][32], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][32], 1785359103);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][32], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][32], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][32], 1);

    AdminPanel[playerid][33] = CreatePlayerTextDraw(playerid, 225.500, 188.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][33], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][33], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][33], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][33], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][33], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][33], 1);

    AdminPanel[playerid][34] = CreatePlayerTextDraw(playerid, 294.500, 188.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][34], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][34], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][34], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][34], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][34], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][34], 1);

    AdminPanel[playerid][35] = CreatePlayerTextDraw(playerid, 363.500, 188.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][35], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][35], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][35], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][35], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][35], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][35], 1);

    AdminPanel[playerid][36] = CreatePlayerTextDraw(playerid, 225.500, 214.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][36], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][36], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][36], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][36], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][36], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][36], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][36], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][36], 1);

    AdminPanel[playerid][37] = CreatePlayerTextDraw(playerid, 294.500, 214.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][37], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][37], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][37], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][37], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][37], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][37], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][37], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][37], 1);

    AdminPanel[playerid][38] = CreatePlayerTextDraw(playerid, 363.500, 214.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][38], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][38], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][38], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][38], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][38], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][38], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][38], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][38], 1);

    AdminPanel[playerid][39] = CreatePlayerTextDraw(playerid, 226.000, 189.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][39], 64.500, 20.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][39], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][39], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][39], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][39], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][39], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][39], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][39], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][39], 1);

    AdminPanel[playerid][40] = CreatePlayerTextDraw(playerid, 295.000, 189.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][40], 64.500, 20.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][40], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][40], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][40], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][40], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][40], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][40], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][40], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][40], 1);

    AdminPanel[playerid][41] = CreatePlayerTextDraw(playerid, 364.000, 189.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][41], 64.500, 20.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][41], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][41], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][41], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][41], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][41], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][41], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][41], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][41], 1);

    AdminPanel[playerid][42] = CreatePlayerTextDraw(playerid, 226.000, 214.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][42], 64.500, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][42], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][42], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][42], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][42], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][42], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][42], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][42], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][42], 1);

    AdminPanel[playerid][43] = CreatePlayerTextDraw(playerid, 295.000, 214.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][43], 64.500, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][43], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][43], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][43], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][43], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][43], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][43], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][43], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][43], 1);

    AdminPanel[playerid][44] = CreatePlayerTextDraw(playerid, 364.000, 214.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][44], 64.500, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][44], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][44], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][44], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][44], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][44], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][44], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][44], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][44], 1);

    AdminPanel[playerid][45] = CreatePlayerTextDraw(playerid, 226.000, 245.000, "PLAYER ACTION");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][45], 0.159, 0.799);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][45], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][45], 1785359103);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][45], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][45], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][45], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][45], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][45], 1);

    AdminPanel[playerid][46] = CreatePlayerTextDraw(playerid, 225.500, 258.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][46], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][46], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][46], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][46], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][46], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][46], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][46], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][46], 1);

    AdminPanel[playerid][47] = CreatePlayerTextDraw(playerid, 294.500, 258.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][47], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][47], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][47], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][47], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][47], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][47], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][47], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][47], 1);

    AdminPanel[playerid][48] = CreatePlayerTextDraw(playerid, 363.500, 258.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][48], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][48], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][48], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][48], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][48], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][48], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][48], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][48], 1);

    AdminPanel[playerid][49] = CreatePlayerTextDraw(playerid, 225.500, 284.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][49], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][49], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][49], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][49], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][49], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][49], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][49], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][49], 1);

    AdminPanel[playerid][50] = CreatePlayerTextDraw(playerid, 294.500, 284.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][50], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][50], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][50], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][50], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][50], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][50], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][50], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][50], 1);

    AdminPanel[playerid][51] = CreatePlayerTextDraw(playerid, 363.500, 284.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][51], 65.500, 22.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][51], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][51], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][51], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][51], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][51], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][51], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][51], 1);

    AdminPanel[playerid][52] = CreatePlayerTextDraw(playerid, 226.000, 259.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][52], 64.500, 20.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][52], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][52], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][52], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][52], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][52], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][52], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][52], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][52], 1);

    AdminPanel[playerid][53] = CreatePlayerTextDraw(playerid, 295.000, 259.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][53], 64.500, 20.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][53], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][53], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][53], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][53], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][53], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][53], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][53], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][53], 1);

    AdminPanel[playerid][54] = CreatePlayerTextDraw(playerid, 364.000, 259.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][54], 64.500, 20.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][54], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][54], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][54], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][54], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][54], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][54], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][54], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][54], 1);

    AdminPanel[playerid][55] = CreatePlayerTextDraw(playerid, 226.000, 284.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][55], 64.500, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][55], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][55], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][55], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][55], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][55], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][55], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][55], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][55], 1);

    AdminPanel[playerid][56] = CreatePlayerTextDraw(playerid, 295.000, 284.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][56], 64.500, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][56], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][56], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][56], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][56], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][56], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][56], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][56], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][56], 1);

    AdminPanel[playerid][57] = CreatePlayerTextDraw(playerid, 364.000, 284.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][57], 64.500, 21.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][57], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][57], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][57], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][57], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][57], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][57], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][57], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][57], 1);

    AdminPanel[playerid][58] = CreatePlayerTextDraw(playerid, 226.000, 315.000, "SERVER");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][58], 0.159, 0.799);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][58], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][58], 1785359103);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][58], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][58], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][58], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][58], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][58], 1);

    AdminPanel[playerid][59] = CreatePlayerTextDraw(playerid, 225.500, 328.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][59], 100.500, 19.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][59], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][59], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][59], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][59], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][59], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][59], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][59], 1);

    AdminPanel[playerid][60] = CreatePlayerTextDraw(playerid, 327.500, 328.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][60], 100.500, 19.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][60], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][60], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][60], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][60], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][60], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][60], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][60], 1);

    AdminPanel[playerid][61] = CreatePlayerTextDraw(playerid, 226.000, 329.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][61], 99.500, 17.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][61], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][61], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][61], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][61], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][61], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][61], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][61], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][61], 1);

    AdminPanel[playerid][62] = CreatePlayerTextDraw(playerid, 328.000, 329.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][62], 99.500, 17.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][62], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][62], 522133503);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][62], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][62], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][62], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][62], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][62], 1);
    PlayerTextDrawSetSelectable(playerid, AdminPanel[playerid][62], 1);

    AdminPanel[playerid][63] = CreatePlayerTextDraw(playerid, 219.500, 356.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, AdminPanel[playerid][63], 214.500, 1.000);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][63], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][63], 858993663);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][63], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][63], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][63], 255);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][63], 4);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][63], 1);

    AdminPanel[playerid][64] = CreatePlayerTextDraw(playerid, 226.000, 361.000, "Logged in as: Admin");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][64], 0.119, 0.699);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][64], 1);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][64], 1785359103);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][64], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][64], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][64], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][64], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][64], 1);

    AdminPanel[playerid][65] = CreatePlayerTextDraw(playerid, 421.000, 361.000, "Level 7");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][65], 0.119, 0.699);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][65], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][65], 1785359103);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][65], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][65], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][65], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][65], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][65], 1);

    AdminPanel[playerid][66] = CreatePlayerTextDraw(playerid, 259.000, 194.000, "KICK");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][66], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][66], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][66], -526343937);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][66], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][66], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][66], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][66], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][66], 1);

    AdminPanel[playerid][67] = CreatePlayerTextDraw(playerid, 327.000, 194.000, "BAN");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][67], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][67], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][67], -526343937);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][67], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][67], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][67], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][67], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][67], 1);

    AdminPanel[playerid][68] = CreatePlayerTextDraw(playerid, 397.000, 194.000, "JAIL");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][68], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][68], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][68], -526343937);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][68], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][68], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][68], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][68], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][68], 1);

    AdminPanel[playerid][69] = CreatePlayerTextDraw(playerid, 259.000, 220.000, "FREEZE");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][69], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][69], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][69], -524254977);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][69], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][69], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][69], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][69], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][69], 1);

    AdminPanel[playerid][70] = CreatePlayerTextDraw(playerid, 329.000, 220.000, "UNFREEZE");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][70], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][70], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][70], -524254977);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][70], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][70], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][70], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][70], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][70], 1);

    AdminPanel[playerid][71] = CreatePlayerTextDraw(playerid, 397.000, 220.000, "WARN");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][71], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][71], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][71], -524254977);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][71], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][71], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][71], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][71], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][71], 1);

    AdminPanel[playerid][72] = CreatePlayerTextDraw(playerid, 259.000, 264.000, "HEAL");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][72], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][72], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][72], -1630936833);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][72], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][72], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][72], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][72], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][72], 1);

    AdminPanel[playerid][73] = CreatePlayerTextDraw(playerid, 328.000, 264.000, "ARMOUR");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][73], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][73], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][73], -1630936833);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][73], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][73], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][73], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][73], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][73], 1);

    AdminPanel[playerid][74] = CreatePlayerTextDraw(playerid, 397.000, 264.000, "SLAP");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][74], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][74], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][74], -1630936833);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][74], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][74], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][74], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][74], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][74], 1);

    AdminPanel[playerid][75] = CreatePlayerTextDraw(playerid, 259.000, 290.000, "GOTO");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][75], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][75], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][75], -1462191873);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][75], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][75], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][75], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][75], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][75], 1);

    AdminPanel[playerid][76] = CreatePlayerTextDraw(playerid, 327.000, 290.000, "GET");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][76], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][76], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][76], -1462191873);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][76], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][76], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][76], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][76], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][76], 1);

    AdminPanel[playerid][77] = CreatePlayerTextDraw(playerid, 396.000, 290.000, "SPECTATE");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][77], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][77], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][77], -1462191873);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][77], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][77], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][77], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][77], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][77], 1);

    AdminPanel[playerid][78] = CreatePlayerTextDraw(playerid, 275.000, 333.000, "SET TIME");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][78], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][78], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][78], -910630657);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][78], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][78], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][78], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][78], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][78], 1);

    AdminPanel[playerid][79] = CreatePlayerTextDraw(playerid, 379.000, 333.000, "SET WEATHER");
    PlayerTextDrawLetterSize(playerid, AdminPanel[playerid][79], 0.200, 0.898);
    PlayerTextDrawAlignment(playerid, AdminPanel[playerid][79], 2);
    PlayerTextDrawColor(playerid, AdminPanel[playerid][79], -910630657);
    PlayerTextDrawSetShadow(playerid, AdminPanel[playerid][79], 0);
    PlayerTextDrawSetOutline(playerid, AdminPanel[playerid][79], 0);
    PlayerTextDrawBackgroundColor(playerid, AdminPanel[playerid][79], 150);
    PlayerTextDrawFont(playerid, AdminPanel[playerid][79], 1);
    PlayerTextDrawSetProportional(playerid, AdminPanel[playerid][79], 1);
}

hook OnPlayerConnect(playerid)
{
    CreateAdminPanelTD(playerid);
    AccountData[playerid][pAdminTarget] = INVALID_PLAYER_ID;
    AdminPanelInputID[playerid] = INVALID_PLAYER_ID;
    return 1;
}

hook OnPlayerDisconnect(playerid, reason)
{
    AccountData[playerid][pAdminTarget] = INVALID_PLAYER_ID;
    AdminPanelInputID[playerid] = INVALID_PLAYER_ID;
    return 1;
}

ShowAdminPanelTD(playerid, bool:toggle)
{
    if(toggle)
    {
        for(new i = 0; i < 80; i++)
        {
            PlayerTextDrawShow(playerid, AdminPanel[playerid][i]);
        }
        SelectTextDraw(playerid, Y_SERVER);
    }
    else
    {
        for(new i = 0; i < 80; i++)
        {
            PlayerTextDrawHide(playerid, AdminPanel[playerid][i]);
        }
        CancelSelectTextDraw(playerid);
    }
    return 1;
}

YCMD:apanel(playerid, params[], help)
{
    if(AccountData[playerid][pAdmin] < 1)
        return PermissionError(playerid);
    
    Toggle_AllTextdraws(playerid, false);
    ShowAdminPanelTD(playerid, true);
    PanelUpdateAdminLevelText(playerid);
    PanelResetTargetDisplay(playerid);
    return 1;
}

PanelUpdateAdminLevelText(playerid)
{
    new str[32];
    format(str, sizeof(str), "Level %d", AccountData[playerid][pAdmin]);
    PlayerTextDrawSetString(playerid, AdminPanel[playerid][65], str);
    PlayerTextDrawShow(playerid, AdminPanel[playerid][65]);
    return 1;
}

bool:IsValidAdminPanelTarget(playerid)
{
    new targetid = AccountData[playerid][pAdminTarget];
    if(targetid == INVALID_PLAYER_ID || !IsPlayerConnected(targetid))
    {
        ShowTDN(playerid, NOTIFICATION_ERROR, "Anda belum mengunci target! Masukkan ID Player lalu klik SET.");
        return false;
    }
    return true;
}

PanelResetTargetDisplay(playerid)
{
    AccountData[playerid][pAdminTarget] = INVALID_PLAYER_ID;
    AdminPanelInputID[playerid] = INVALID_PLAYER_ID;

    PlayerTextDrawSetString(playerid, AdminPanel[playerid][22], "Masukkan ID");
    PlayerTextDrawSetString(playerid, AdminPanel[playerid][31], "ID 0 - Player Name");
    PlayerTextDrawShow(playerid, AdminPanel[playerid][22]);
    PlayerTextDrawShow(playerid, AdminPanel[playerid][31]);
    return 1;
}

PanelLockTarget(playerid)
{
    new otherid = AdminPanelInputID[playerid];

    if(otherid == INVALID_PLAYER_ID || !IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "ID Player belum diinput atau tidak valid!");

    AccountData[playerid][pAdminTarget] = otherid;

    new pname[24], str[64];
    GetPlayerName(otherid, pname, sizeof(pname));
    format(str, sizeof(str), "ID %d - %s", otherid, pname);
    PlayerTextDrawSetString(playerid, AdminPanel[playerid][31], str);
    PlayerTextDrawShow(playerid, AdminPanel[playerid][31]);

    ShowTDN(playerid, NOTIFICATION_INFO, "Target berhasil dikunci!");
    return 1;
}

PanelKickPlayer(playerid, otherid, reason[])
{
    if (AccountData[playerid][pAdmin] < 1 && !AccountData[playerid][pWitch] && AccountData[playerid][pAdminHelper] < 1)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    if (!IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");

    if (AccountData[playerid][pAdmin] < AccountData[otherid][pAdmin])
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak dapat melakukannya terhadap admin lebih tinggi dari kamu!");

    static string[144];

    ShowKickTD(otherid, AccountData[playerid][pAdminname], reason);

    foreach (new i : Player) if (AccountData[i][pSpawned] && ToggleInfo[i][TogAdmCmd]) {
        format(string, sizeof(string), "AdmCmd: %s(%d) has been kicked from the server by %s", AccountData[otherid][pName], otherid, AccountData[playerid][pAdminname]);
        SendClientMessage(i, Y_LIGHTRED, string);
        format(string, sizeof(string), "Reason: %s", reason);
        SendClientMessage(i, Y_LIGHTRED, string);
    }
    KickEx(otherid);

    PanelResetTargetDisplay(playerid);
    return 1;
}

PanelBanPlayer(playerid, otherid, datez, reason[])
{
    if (AccountData[playerid][pAdmin] < 1)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    new ban_time;

    if (!IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");

    if (datez < 0) return ShowTDN(playerid, NOTIFICATION_ERROR, "Mohon masukkan durasi ban yang valid!");

    if (otherid == playerid)
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak dapat melakukannya terhadap diri sendiri!");

    static string[144];
    if(AccountData[otherid][pAdmin] > AccountData[playerid][pAdmin])
    {
        format(string, sizeof(string), "AdmCmd: %s attempted to ban you.", AccountData[playerid][pAdminname]);
        SendClientMessage(otherid, Y_LIGHTRED, string);
        ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak dapat melakukannya terhadap admin lebih tinggi!");
        return 1;
    }
    new PlayerIP[16], giveplayer[24];

    GetPlayerName(otherid, giveplayer, sizeof(giveplayer));
    GetPlayerIp(otherid, PlayerIP, sizeof(PlayerIP));

    if (datez != 0)
    {
        foreach (new i : Player) if (AccountData[i][pSpawned] && ToggleInfo[i][TogAdmCmd])
        {
            format(string, sizeof(string), "AdmCmd: %s set a ban status on %s(%d) for %d days.", AccountData[playerid][pAdminname], AccountData[otherid][pName], otherid, datez);
            SendClientMessage(i, Y_LIGHTRED, string);
            format(string, sizeof(string), "Reason: %s", reason);
            SendClientMessage(i, Y_LIGHTRED, string);
        }
    }
    else
    {
        foreach (new i : Player) if (AccountData[i][pSpawned] && ToggleInfo[i][TogAdmCmd])
        {
            format(string, sizeof(string), "AdmCmd: %s set a permanent ban status on %s(%d).", AccountData[playerid][pAdminname], AccountData[otherid][pName], otherid);
            SendClientMessage(i, Y_LIGHTRED, string);
            format(string, sizeof(string), "Reason: %s", reason);
            SendClientMessage(i, Y_LIGHTRED, string);
        }
    }
    BanPlayerMSG(otherid, playerid, reason);
    if (datez != 0)
    {
        format(string, sizeof(string), "[Banned] This ban status will automatically expire in %d days.", datez);
        SendClientMessage(otherid, X11_LIGHTBLUE, string);
        ban_time = gettime() + (datez * 86400);
    }
    else
    {
        SendClientMessage(otherid, X11_LIGHTBLUE, "[Banned] This ban status is permanent; request an unban on Discord!");
        ban_time = datez;
    }
    new query[248];
    mysql_format(g_SQL, query, sizeof(query), "INSERT INTO `player_bans`(`name`, `ip`, `admin`, `reason`, `ban_date`, `ban_expire`) VALUES ('%e', '%e', '%e', '%e', %i, %d)", giveplayer, PlayerIP, AccountData[playerid][pAdminname], reason, gettime(), ban_time);
    mysql_pquery(g_SQL, query);

    static year, month, day, keidwa[100], warsc[512];
    getdate(year, month, day);
    format(keidwa, sizeof(keidwa), "%02d/%02d/%d", day, month, year);

    for (new id; id < 100; ++id)
    {
        if (!PlayerWarning[otherid][id][warnExists])
        {
            PlayerWarning[otherid][id][warnExists] = true;
            PlayerWarning[otherid][id][warnOwner] = AccountData[otherid][pID];
            PlayerWarning[otherid][id][warnType] = 3;
            strcopy(PlayerWarning[otherid][id][warnIssuer], AccountData[playerid][pAdminname]);
            strcopy(PlayerWarning[otherid][id][warnDate], keidwa);
            strcopy(PlayerWarning[otherid][id][warnDateTime], GetAdvTime());
            strcopy(PlayerWarning[otherid][id][warnReason], reason);
            break;
        }
    }

    mysql_format(g_SQL, warsc, sizeof(warsc), "INSERT INTO `player_warns` SET `Owner_ID` = %d, `Date` = '%e', `Date_Time` = '%e', `Issuer` = '%e', `Type` = 3, `Reason` = '%e'",
        AccountData[otherid][pID], keidwa, GetAdvTime(), AccountData[playerid][pAdminname], reason);
    mysql_pquery(g_SQL, warsc);

    KickEx(otherid);

    PanelResetTargetDisplay(playerid);
    return 1;
}

PanelJailPlayer(playerid, otherid, timeSec, fine, reason[])
{
    if (AccountData[playerid][pAdmin] < 1 && AccountData[playerid][pAdminVlounter] < 1 && AccountData[playerid][pAdminHelper] < 1)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    if (!IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke dalam server!");

    static string[144];
    if (OJailData[otherid][jailed])
    {
        format(string, sizeof(string), "[Jail] %s(%i) sedang dijail admin (Remaining %d minutes).", AccountData[otherid][pName], otherid, OJailData[otherid][jailTime] / 60);
        SendClientMessage(playerid, X11_LIGHTBLUE, string);
        SUM(playerid, "/unjail [playerid] untuk membebaskannya!");
        return 1;
    }

    if(!AccountData[otherid][pSpawned]) return ShowTDN(playerid, NOTIFICATION_ERROR, sprintf("Player %s(%i) belum spawn!", AccountData[otherid][pName], otherid));

    if(strlen(reason) > 64)
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Reason maksimum adalah 64 karakter!");

    if(timeSec < 1)
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Waktu jail minimum adalah 1 menit!");

    OJailData[otherid][jailed] = true;
    strcopy(OJailData[otherid][jailAdmin], AccountData[playerid][pAdminname]);
    OJailData[otherid][jailTime] = timeSec * 60;
    OJailData[otherid][jailDur] = timeSec;
    strcopy(OJailData[otherid][jailReason], reason);
    OJailData[otherid][jailFine] = fine;
    TakePlayerMoneyEx(otherid, fine);

    SendPlayerToJailAdmin(otherid);

    foreach (new i : Player)
    {
        if (AccountData[i][pSpawned] && ToggleInfo[i][TogAdmCmd]) {
            format(string, sizeof(string), "AdmCmd: %s(%i) has been OOC jailed by %s for %d minutes.", AccountData[otherid][pName], otherid, AccountData[playerid][pAdminname], timeSec);
            SendClientMessage(i, Y_LIGHTRED, string);
            format(string, sizeof(string), "Reason: %s", reason);
            SendClientMessage(i, Y_LIGHTRED, string);
        }
    }

    format(string, sizeof(string), "[Jail] Anda telah dijail OOC oleh %s selama %d menit, denda $%s [%s].", AccountData[playerid][pAdminname], timeSec, FormatMoney(fine), reason);
    SendClientMessage(otherid, Y_LIGHTRED, string);

    static year, month, day, keidwa[100], warsc[512];
    getdate(year, month, day);
    format(keidwa, sizeof(keidwa), "%02d/%02d/%d", day, month, year);

    for (new id; id < 100; ++id) {
        if (!PlayerWarning[otherid][id][warnExists]) {
            PlayerWarning[otherid][id][warnExists] = true;
            PlayerWarning[otherid][id][warnOwner] = AccountData[otherid][pID];
            PlayerWarning[otherid][id][warnType] = 2;
            strcopy(PlayerWarning[otherid][id][warnIssuer], AccountData[playerid][pAdminname]);
            strcopy(PlayerWarning[otherid][id][warnDate], keidwa);
            strcopy(PlayerWarning[otherid][id][warnDateTime], GetAdvTime());
            strcopy(PlayerWarning[otherid][id][warnReason], reason);
            break;
        }
    }

    mysql_format(g_SQL, warsc, sizeof(warsc), "INSERT INTO `player_warns` SET `Owner_ID` = %d, `Date` = '%e', `Date_Time` = '%e', `Issuer` = '%e', `Type` = 2, `Reason` = '%e'",
        AccountData[otherid][pID], keidwa, GetAdvTime(), AccountData[playerid][pAdminname], reason);
    mysql_pquery(g_SQL, warsc);

    return 1;
}

PanelFreezePlayer(playerid, otherid)
{
    if (AccountData[playerid][pAdmin] < 1)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    if (!IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");

    AccountData[playerid][pFreeze] = true;

    static string[144];
    TogglePlayerControllable(otherid, false);
    format(string, sizeof(string), "AdmCmd: %s froze your movement.", AccountData[playerid][pAdminname]);
    SendClientMessage(otherid, Y_LIGHTRED, string);
    SendAdm(playerid, "You have froze %s(%d).", AccountData[otherid][pName], otherid);

    return 1;
}

PanelUnfreezePlayer(playerid, otherid)
{
    if(AccountData[playerid][pAdmin] < 1)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    if(!IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");

    AccountData[playerid][pFreeze] = false;

    static string[144];
    TogglePlayerControllable(otherid, true);
    format(string, sizeof(string), "AdmCmd: %s has allowed your movement.", AccountData[playerid][pAdminname]);
    SendClientMessage(otherid, Y_LIGHTRED, string);
    SendAdm(playerid, "You have allowed the movement of %s(%d).", AccountData[otherid][pName], otherid);

    return 1;
}

PanelWarnPlayer(playerid, otherid, reason[])
{
    if(AccountData[playerid][pAdmin] < 1)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    if(!IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");

    if(strlen(reason) > 64) return ShowTDN(playerid, NOTIFICATION_ERROR, "Maksimum reason adalah 64 karakter!");

    if(AccountData[otherid][pAdmin] > AccountData[playerid][pAdmin])
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak dapat melakukannya terhadap admin lebih tinggi!");

    if(AccountData[otherid][pWarn] >= MAX_PWARNS)
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut telah mencapai batas maksimum warn!");

    AccountData[otherid][pWarn]++;

    static string[144];
    foreach(new i : Player) if(AccountData[i][pSpawned] && ToggleInfo[i][TogAdmCmd])
    {
        format(string, sizeof(string), "AdmCmd: %s(%i) has been warned by %s [Total: %d/20]", AccountData[otherid][pName], otherid, AccountData[playerid][pAdminname], AccountData[otherid][pWarn]);
        SendClientMessage(i, Y_LIGHTRED, string);
        format(string, sizeof(string), "Reason: %s", reason);
        SendClientMessage(i, Y_LIGHTRED, string);
    }

    ShowWarningTD(otherid, AccountData[playerid][pAdminname], reason);

    static year, month, day, keidwa[100], warsc[512];
    getdate(year, month, day);
    format(keidwa, sizeof(keidwa), "%02d/%02d/%d", day, month, year);

    for(new id; id < 100; ++id)
    {
        if(!PlayerWarning[otherid][id][warnExists])
        {
            PlayerWarning[otherid][id][warnExists] = true;
            PlayerWarning[otherid][id][warnOwner] = AccountData[otherid][pID];
            PlayerWarning[otherid][id][warnType] = 1;
            strcopy(PlayerWarning[otherid][id][warnIssuer], AccountData[playerid][pAdminname]);
            strcopy(PlayerWarning[otherid][id][warnDate], keidwa);
            strcopy(PlayerWarning[otherid][id][warnDateTime], GetAdvTime());
            strcopy(PlayerWarning[otherid][id][warnReason], reason);
            break;
        }
    }

    mysql_format(g_SQL, warsc, sizeof(warsc), "INSERT INTO `player_warns` SET `Owner_ID` = %d, `Date` = '%e', `Date_Time` = '%e', `Issuer` = '%e', `Type` = 1, `Reason` = '%e'",
        AccountData[otherid][pID], keidwa, GetAdvTime(), AccountData[playerid][pAdminname], reason);
    mysql_pquery(g_SQL, warsc);

    if(AccountData[otherid][pWarn] >= MAX_PWARNS)
    {
        static query[522];
        mysql_format(g_SQL, query, sizeof(query), "UPDATE `player_ucp` SET `Blocked`=1, `Block_Duration`=0, `Block_Reason`='20 Warns', `Block_AdminName`='Nexston AntiCheat', `Block_IssuedDate`=CURRENT_TIMESTAMP() WHERE `UCP`='%e'", AccountData[otherid][pUCP]);
        mysql_pquery(g_SQL, query);

        PanelResetTargetDisplay(playerid);
        return KickEx(otherid);
    }

    return 1;
}

PanelHealPlayer(playerid, otherid, Float:amount)
{
    if(AccountData[playerid][pAdmin] < 2)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    if(!IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");

    if(amount < 1.0) amount = 1.0;
    if(amount > 100.0) amount = 100.0;

    SetPlayerHealthEx(otherid, amount);

    static string[144];
    format(string, sizeof(string), "AdmCmd: %s has set your character's health to %.2f.", AccountData[playerid][pAdminname], amount);
    SendClientMessage(otherid, Y_LIGHTRED, string);

    SendStaffMessage(Y_LIGHTRED, "AdmCmd: %s set %s (%d) health to %.2f.", AccountData[playerid][pAdminname], AccountData[otherid][pName], otherid, amount);
    return 1;
}

PanelArmourPlayer(playerid, otherid, Float:amount)
{
    if (AccountData[playerid][pAdmin] < 2)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    if (!IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");

    if(amount < 0.0) amount = 0.0;
    if(amount > 99.0) amount = 99.0;

    SetPlayerArmourEx(otherid, amount);

    static string[144];
    format(string, sizeof(string), "AdmCmd: %s has set your character's armor to %.2f.", AccountData[playerid][pAdminname], amount);
    SendClientMessage(otherid, Y_LIGHTRED, string);

    SendStaffMessage(Y_LIGHTRED, "AdmCmd: %s set %s (%d) armor to %.2f.", AccountData[playerid][pAdminname], AccountData[otherid][pName], otherid, amount);
    return 1;
}

PanelSlapPlayer(playerid, otherid)
{
    if (AccountData[playerid][pAdmin] < 1 && !AccountData[playerid][pWitch])
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    if (!IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");

    new Float:POS[3];
    GetPlayerPos(otherid, POS[0], POS[1], POS[2]);
    SetPlayerPos(otherid, POS[0], POS[1], POS[2] + 9.0);
    if (IsPlayerInAnyVehicle(otherid))
    {
        RemovePlayerFromVehicle(otherid);
    }
    SendAdm(playerid, "You have used '/slap' on %s(%d).", AccountData[otherid][pName], otherid);

    PlayerPlaySound(otherid, 1130, 0.0, 0.0, 0.0);

    return 1;
}

PanelGotoPlayer(playerid, otherid)
{
    if (AccountData[playerid][pAdmin] < 1 && !AccountData[playerid][pWitch] && AccountData[playerid][pAdminVlounter] < 1 && AccountData[playerid][pAdminHelper] < 1)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    if (!IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");

    static string[144];
    SendPlayerToPlayer(playerid, otherid);
    format(string, sizeof(string), "AdmCmd: %s teleported to your position.", AccountData[playerid][pAdminname]);
    SendClientMessage(otherid, Y_LIGHTRED, string);

    return 1;
}

PanelGetPlayer(playerid, otherid)
{
    if (AccountData[playerid][pAdmin] < 1 && !AccountData[playerid][pWitch])
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    if (!IsPlayerConnected(otherid)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");

    if (AccountData[playerid][pAdmin] < AccountData[otherid][pAdmin])
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak dapat menarik admin yang lebih tinggi dari kamu!");

    if (otherid == playerid) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak dapat melakukannya terhadap diri sendiri!");

    if (!AccountData[playerid][pSpawned] || !AccountData[otherid][pSpawned])
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda/Pemain tersebut belum spawn!");

    if (OJailData[playerid][jailed] || OJailData[otherid][jailed])
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda/Pemain tersebut sedang di jail admin!");

    static string[144];
    SendPlayerToPlayer(otherid, playerid);
    format(string, sizeof(string), "AdmCmd: %s teleported you to their position.", AccountData[playerid][pAdminname]);
    SendClientMessage(otherid, Y_LIGHTRED, string);
    SendAdm(playerid, "You have teleported %s to your position.", AccountData[otherid][pName]);
    return 1;
}

PanelSpecPlayer(playerid, otherid)
{
    if (AccountData[playerid][pAdmin] < 1 && !AccountData[playerid][pWitch] && !AccountData[playerid][pApprentice] && AccountData[playerid][pAdminHelper] < 1 && AccountData[playerid][pAdminVlounter] < 1)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    if (!IsPlayerConnected(otherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");

    if (otherid == playerid)
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak dapat spec diri sendiri!");

    if (AccountData[playerid][pAdmin] < AccountData[otherid][pAdmin])
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak dapat spec admin yang lebih tinggi!");

    if (!AccountData[otherid][pSpawned])
        return ShowTDN(playerid, NOTIFICATION_ERROR, sprintf("Player %s(%i) belum spawn!", AccountData[otherid][pName], otherid));

    if (GetPlayerState(playerid) != PLAYER_STATE_SPECTATING)
    {
        GetPlayerPos(playerid, AccountData[playerid][pPos][0], AccountData[playerid][pPos][1], AccountData[playerid][pPos][2]);
        GetPlayerFacingAngle(playerid, AccountData[playerid][pPos][3]);

        AccountData[playerid][pInterior] = GetPlayerInterior(playerid);
        AccountData[playerid][pWorld] = GetPlayerVirtualWorld(playerid);
    }
    SetPlayerInterior(playerid, GetPlayerInterior(otherid));
    SetPlayerVirtualWorld(playerid, GetPlayerVirtualWorld(otherid));

    TogglePlayerSpectating(playerid, true);

    static str[144];

    new Float:health, Float:armour;
    GetPlayerHealth(otherid, health);
    GetPlayerArmour(otherid, armour);
    if(IsPlayerInAnyVehicle(otherid) && Iter_Contains(Vehicle, GetPlayerVehicleID(otherid)))
    {
        new vID = GetVehicleModel(GetPlayerVehicleID(otherid));
        PlayerSpectateVehicle(playerid, GetPlayerVehicleID(otherid));
        if (GetPlayerState(otherid) == PLAYER_STATE_DRIVER)
        {
            format(str, sizeof(str), "%s (%d)", ReturnName(otherid), otherid);
            PlayerTextDrawSetString(playerid, SpecNSRP[playerid][1], str);

            format(str, sizeof(str), "%.1f - %.1f", health, armour);
            PlayerTextDrawSetString(playerid, SpecNSRP[playerid][2], str);

            for(new i = 0; i < 11; i++)
                PlayerTextDrawShow(playerid, SpecNSRP[playerid][i]);

            SendAdm(playerid, "You are spectating %s(%i) who is currently driving %s(%d).", AccountData[otherid][pName], otherid, GetVehicleModelName(vID), GetPlayerVehicleID(otherid));
        }
        else
        {
            format(str, sizeof(str), "%s (%d)", ReturnName(otherid), otherid);
            PlayerTextDrawSetString(playerid, SpecNSRP[playerid][1], str);

            format(str, sizeof(str), "%.1f - %.1f", health, armour);
            PlayerTextDrawSetString(playerid, SpecNSRP[playerid][2], str);

            for(new i = 0; i < 11; i++)
                PlayerTextDrawShow(playerid, SpecNSRP[playerid][i]);

            SendAdm(playerid, "You are spectating %s(%i) who is a passenger in %s(%d).", AccountData[otherid][pName], otherid, GetVehicleModelName(vID), GetPlayerVehicleID(otherid));
        }
    }
    else
    {
        PlayerSpectatePlayer(playerid, otherid);
        format(str, sizeof(str), "%s (%d)", ReturnName(otherid), otherid);
        PlayerTextDrawSetString(playerid, SpecNSRP[playerid][1], str);

        format(str, sizeof(str), "%.1f - %.1f", health, armour);
        PlayerTextDrawSetString(playerid, SpecNSRP[playerid][2], str);

        for(new i = 0; i < 11; i++)
            PlayerTextDrawShow(playerid, SpecNSRP[playerid][i]);
    }
    AccountData[playerid][pSpec] = otherid;
    SendStaffMessage(Y_LIGHTRED, "AdmCmd: %s is spectating %s (%d).", AccountData[playerid][pAdminname], AccountData[otherid][pName], otherid);

    return 1;
}

PanelSetTime(playerid, time)
{
    if(AccountData[playerid][pAdmin] < 5)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    static string[144];
    format(string, sizeof(string), "(Server) "WHITE"Pengurus "RED"%s "WHITE"telah mengganti waktu server.", AccountData[playerid][pAdminname]);

    SetWorldTime(time);
    WorldTime = time;
    foreach(new ii : Player)
    {
        SetPlayerTime(ii, time, 0);
        SendClientMessage(ii, Y_SERVER, string);
    }
    return 1;
}

PanelSetWeather(playerid, weatherid)
{
    if(AccountData[playerid][pAdmin] < 5)
        return PermissionError(playerid);
    if (AccountData[playerid][pAdminDuty] == false)
        return PermissionErrorDuty(playerid);

    SetWeather(weatherid);
    WorldWeather = weatherid;
    static string[144];
    format(string, sizeof(string), "(Server) "WHITE"Pengurus "RED"%s "WHITE"telah mengganti cuaca server.", AccountData[playerid][pAdminname]);
    foreach(new ii : Player)
    {
        SetPlayerWeather(ii, weatherid);
        SendClientMessage(ii, Y_SERVER, string);
    }

    return 1;
}

hook ClickDynPlayerTextdraw(playerid, PlayerText: playertextid)
{
    if(playertextid == AdminPanel[playerid][15]) // Button: Close Panel Admin
    {
        ShowAdminPanelTD(playerid, false);
        Toggle_AllTextdraws(playerid, true);
    }
    if(playertextid == AdminPanel[playerid][19]) // Button: Masukkan ID
    {
        Dialog_Show(playerid, "DialogPanelInputID", DIALOG_STYLE_INPUT, "{D4AF37}Admin Panel{FFFFFF} - Masukkan ID", "Masukkan ID Player yang ingin dijadikan target:", "Input", "Batal");
        return 1;
    }

    if(playertextid == AdminPanel[playerid][20]) // Button: SET
    {
        PanelLockTarget(playerid);
        return 1;
    }

    if(playertextid == AdminPanel[playerid][39]) // Button: KICK
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        Dialog_Show(playerid, "DialogPanelKick", DIALOG_STYLE_INPUT, "{D4AF37}Admin Panel{FFFFFF} - Kick", "Masukkan reason kick:", "Kick", "Batal");
        return 1;
    }

    if(playertextid == AdminPanel[playerid][40]) // Button: BAN
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        Dialog_Show(playerid, "DialogPanelBan", DIALOG_STYLE_INPUT, "{D4AF37}Admin Panel{FFFFFF} - Ban", "Masukkan durasi (hari, 0 = permanent) lalu reason.\nContoh: 7 Cheating\nContoh permanent: 0 Cheating", "Ban", "Batal");
        return 1;
    }

    if(playertextid == AdminPanel[playerid][41]) // Button: JAIL
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        Dialog_Show(playerid, "DialogPanelJail", DIALOG_STYLE_INPUT, "{D4AF37}Admin Panel{FFFFFF} - Jail", "Masukkan waktu (menit), denda, lalu reason.\nContoh: 15 5000 AFK Farming", "Jail", "Batal");
        return 1;
    }

    if(playertextid == AdminPanel[playerid][42]) // Button: FREEZE
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        PanelFreezePlayer(playerid, AccountData[playerid][pAdminTarget]);
        return 1;
    }

    if(playertextid == AdminPanel[playerid][43]) // Button: UNFREEZE
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        PanelUnfreezePlayer(playerid, AccountData[playerid][pAdminTarget]);
        return 1;
    }

    if(playertextid == AdminPanel[playerid][44]) // Button: WARN
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        Dialog_Show(playerid, "DialogPanelWarn", DIALOG_STYLE_INPUT, "{D4AF37}Admin Panel{FFFFFF} - Warn", "Masukkan reason warn:", "Warn", "Batal");
        return 1;
    }

    if(playertextid == AdminPanel[playerid][52]) // Button: HEAL
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        Dialog_Show(playerid, "DialogPanelHeal", DIALOG_STYLE_INPUT, "{D4AF37}Admin Panel{FFFFFF} - Heal", "Masukkan jumlah HP (1 - 100):", "Set", "Batal");
        return 1;
    }

    if(playertextid == AdminPanel[playerid][53]) // Button: ARMOUR
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        Dialog_Show(playerid, "DialogPanelArmour", DIALOG_STYLE_INPUT, "{D4AF37}Admin Panel{FFFFFF} - Armour", "Masukkan jumlah Armour (0 - 99):", "Set", "Batal");
        return 1;
    }

    if(playertextid == AdminPanel[playerid][54]) // Button: SLAP
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        PanelSlapPlayer(playerid, AccountData[playerid][pAdminTarget]);
        return 1;
    }

    if(playertextid == AdminPanel[playerid][55]) // Button: GOTO
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        PanelGotoPlayer(playerid, AccountData[playerid][pAdminTarget]);
        return 1;
    }

    if(playertextid == AdminPanel[playerid][56]) // Button: GET
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        PanelGetPlayer(playerid, AccountData[playerid][pAdminTarget]);
        return 1;
    }

    if(playertextid == AdminPanel[playerid][57]) // Button: SPECTATE
    {
        if(!IsValidAdminPanelTarget(playerid)) return 1;
        PanelSpecPlayer(playerid, AccountData[playerid][pAdminTarget]);
        return 1;
    }

    if(playertextid == AdminPanel[playerid][61]) // Button: SETTIME
    {
        Dialog_Show(playerid, "DialogPanelSettime", DIALOG_STYLE_INPUT, "{D4AF37}Admin Panel{FFFFFF} - Set Time", "Masukkan Time ID (0 - 23):", "Set", "Batal");
        return 1;
    }

    if(playertextid == AdminPanel[playerid][62]) // Button: SETWEATHER
    {
        Dialog_Show(playerid, "DialogPanelSetweather", DIALOG_STYLE_INPUT, "{D4AF37}Admin Panel{FFFFFF} - Set Weather", "Masukkan Weather ID:", "Set", "Batal");
        return 1;
    }
    return 1;
}

Dialog:DialogPanelInputID(playerid, response, listitem, inputtext[])
{
    if(!response) return 1;

    new id;
    if(sscanf(inputtext, "d", id))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Mohon masukkan ID yang valid (angka)!");

    if(!IsPlayerConnected(id))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "ID Player tersebut tidak terkoneksi ke server!");

    AdminPanelInputID[playerid] = id;

    new str[32];
    format(str, sizeof(str), "ID %d", id);
    PlayerTextDrawSetString(playerid, AdminPanel[playerid][22], str);
    PlayerTextDrawShow(playerid, AdminPanel[playerid][22]);
    return 1;
}

Dialog:DialogPanelKick(playerid, response, listitem, inputtext[])
{
    if(!response) return 1;
    if(!IsValidAdminPanelTarget(playerid)) return 1;

    if(isnull(inputtext))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Reason tidak boleh kosong!");

    PanelKickPlayer(playerid, AccountData[playerid][pAdminTarget], inputtext);
    return 1;
}

Dialog:DialogPanelBan(playerid, response, listitem, inputtext[])
{
    if(!response) return 1;
    if(!IsValidAdminPanelTarget(playerid)) return 1;

    new datez, reason[64];
    if(sscanf(inputtext, "ds[64]", datez, reason))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Format salah! Contoh: 7 Cheating");

    PanelBanPlayer(playerid, AccountData[playerid][pAdminTarget], datez, reason);
    return 1;
}

Dialog:DialogPanelJail(playerid, response, listitem, inputtext[])
{
    if(!response) return 1;
    if(!IsValidAdminPanelTarget(playerid)) return 1;

    new timeSec, fine, reason[64];
    if(sscanf(inputtext, "D(15)ds[64]", timeSec, fine, reason))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Format salah! Contoh: 15 5000 AFK Farming");

    PanelJailPlayer(playerid, AccountData[playerid][pAdminTarget], timeSec, fine, reason);
    return 1;
}

Dialog:DialogPanelWarn(playerid, response, listitem, inputtext[])
{
    if(!response) return 1;
    if(!IsValidAdminPanelTarget(playerid)) return 1;

    if(isnull(inputtext))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Reason tidak boleh kosong!");

    PanelWarnPlayer(playerid, AccountData[playerid][pAdminTarget], inputtext);
    return 1;
}

Dialog:DialogPanelHeal(playerid, response, listitem, inputtext[])
{
    if(!response) return 1;
    if(!IsValidAdminPanelTarget(playerid)) return 1;

    new Float:amount;
    if(sscanf(inputtext, "f", amount))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Mohon masukkan angka yang valid!");

    if(amount < 1.0 || amount > 100.0)
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Jumlah HP harus di antara 1 - 100!");

    PanelHealPlayer(playerid, AccountData[playerid][pAdminTarget], amount);
    return 1;
}

Dialog:DialogPanelArmour(playerid, response, listitem, inputtext[])
{
    if(!response) return 1;
    if(!IsValidAdminPanelTarget(playerid)) return 1;

    new Float:amount;
    if(sscanf(inputtext, "f", amount))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Mohon masukkan angka yang valid!");

    if(amount < 0.0 || amount > 99.0)
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Jumlah Armour harus di antara 0 - 99!");

    PanelArmourPlayer(playerid, AccountData[playerid][pAdminTarget], amount);
    return 1;
}

Dialog:DialogPanelSettime(playerid, response, listitem, inputtext[])
{
    if(!response) return 1;

    new time;
    if(sscanf(inputtext, "d", time))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Mohon masukkan Time ID yang valid!");

    PanelSetTime(playerid, time);
    return 1;
}

Dialog:DialogPanelSetweather(playerid, response, listitem, inputtext[])
{
    if(!response) return 1;

    new weatherid;
    if(sscanf(inputtext, "d", weatherid))
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Mohon masukkan Weather ID yang valid!");

    PanelSetWeather(playerid, weatherid);
    return 1;
}