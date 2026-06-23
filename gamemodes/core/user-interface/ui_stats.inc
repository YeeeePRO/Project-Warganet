#include <YSI_Coding\y_hooks>
new PlayerText:StaticNSrp[MAX_PLAYERS][35];
new OnlinePlayerAll;

CreatePStatsTD(playerid)
{
    StaticNSrp[playerid][0] = CreatePlayerTextDraw(playerid, 615.000000, 132.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][0], 19.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][0], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][0], 61469951);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][0], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][0], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][0], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][0], true);
    
    StaticNSrp[playerid][1] = CreatePlayerTextDraw(playerid, 615.000000, 156.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][1], 19.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][1], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][1], 61469951);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][1], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][1], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][1], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][1], true);
    
    StaticNSrp[playerid][2] = CreatePlayerTextDraw(playerid, 615.000000, 180.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][2], 19.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][2], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][2], 61469951);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][2], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][2], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][2], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][2], true);
    
    StaticNSrp[playerid][3] = CreatePlayerTextDraw(playerid, 615.000000, 204.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][3], 19.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][3], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][3], 61469951);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][3], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][3], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][3], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][3], true);
    
    StaticNSrp[playerid][4] = CreatePlayerTextDraw(playerid, 615.000000, 228.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][4], 19.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][4], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][4], 61469951);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][4], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][4], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][4], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][4], true);
    
    StaticNSrp[playerid][5] = CreatePlayerTextDraw(playerid, 615.000000, 252.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][5], 19.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][5], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][5], 61469951);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][5], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][5], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][5], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][5], true);
    
    StaticNSrp[playerid][6] = CreatePlayerTextDraw(playerid, 617.000000, 135.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][6], 15.500000, 14.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][6], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][6], 222798335);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][6], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][6], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][6], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][6], true);
    
    StaticNSrp[playerid][7] = CreatePlayerTextDraw(playerid, 624.000000, 136.000000, "ld_beat:chit");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][7], 6.000000, 6.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][7], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][7], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][7], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][7], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][7], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][7], true);
    
    StaticNSrp[playerid][8] = CreatePlayerTextDraw(playerid, 622.000000, 140.000000, "ld_beat:chit");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][8], 10.500000, 6.500000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][8], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][8], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][8], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][8], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][8], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][8], true);
    
    StaticNSrp[playerid][9] = CreatePlayerTextDraw(playerid, 620.000000, 137.000000, "ld_beat:chit");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][9], 6.000000, 6.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][9], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][9], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][9], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][9], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][9], true);
    
    StaticNSrp[playerid][10] = CreatePlayerTextDraw(playerid, 618.000000, 141.000000, "ld_beat:chit");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][10], 10.500000, 6.500000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][10], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][10], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][10], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][10], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][10], true);
    
    StaticNSrp[playerid][11] = CreatePlayerTextDraw(playerid, 617.000000, 159.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][11], 15.500000, 14.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][11], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][11], 222798335);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][11], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][11], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][11], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][11], true);
    
    StaticNSrp[playerid][12] = CreatePlayerTextDraw(playerid, 623.000000, 160.000000, "ld_beat:chit");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][12], 6.000000, 6.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][12], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][12], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][12], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][12], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][12], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][12], true);
    
    StaticNSrp[playerid][13] = CreatePlayerTextDraw(playerid, 621.000000, 165.000000, "ld_beat:chit");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][13], 10.000000, 6.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][13], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][13], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][13], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][13], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][13], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][13], true);
    
    StaticNSrp[playerid][14] = CreatePlayerTextDraw(playerid, 623.000000, 184.000000, "$");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][14], 400.000000, 17.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][14], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][14], 13128703);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][14], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][14], 1);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][14], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][14], true);
    PlayerTextDrawLetterSize(playerid, StaticNSrp[playerid][14], 0.194997, 1.049000);
    PlayerTextDrawUseBox(playerid, StaticNSrp[playerid][14], false);
    PlayerTextDrawBoxColor(playerid, StaticNSrp[playerid][14], 150);
    
    StaticNSrp[playerid][15] = CreatePlayerTextDraw(playerid, 617.000000, 207.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][15], 15.500000, 14.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][15], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][15], 222798335);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][15], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][15], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][15], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][15], true);
    
    StaticNSrp[playerid][16] = CreatePlayerTextDraw(playerid, 622.000000, 211.000000, "ld_dual:white");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][16], 7.500000, 5.500000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][16], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][16], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][16], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][16], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][16], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][16], true);
    
    StaticNSrp[playerid][17] = CreatePlayerTextDraw(playerid, 627.000000, 212.000000, "ld_dual:white");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][17], 3.000000, 2.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][17], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][17], 555819519);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][17], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][17], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][17], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][17], true);
    
    StaticNSrp[playerid][18] = CreatePlayerTextDraw(playerid, 617.000000, 231.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][18], 15.500000, 14.500000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][18], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][18], 222798335);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][18], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][18], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][18], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][18], true);
    
    StaticNSrp[playerid][19] = CreatePlayerTextDraw(playerid, 622.000000, 236.000000, "ld_dual:white");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][19], 7.500000, 5.500000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][19], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][19], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][19], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][19], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][19], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][19], true);
    
    StaticNSrp[playerid][20] = CreatePlayerTextDraw(playerid, 623.000000, 233.000000, "ld_dual:white");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][20], 5.500000, 5.500000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][20], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][20], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][20], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][20], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][20], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][20], true);
    
    StaticNSrp[playerid][21] = CreatePlayerTextDraw(playerid, 624.000000, 234.000000, "ld_dual:white");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][21], 3.500000, 2.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][21], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][21], 1687547391);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][21], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][21], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][21], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][21], true);
    
    StaticNSrp[playerid][22] = CreatePlayerTextDraw(playerid, 617.000000, 255.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][22], 15.500000, 14.500000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][22], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][22], 222798335);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][22], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][22], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][22], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][22], true);
    
    StaticNSrp[playerid][23] = CreatePlayerTextDraw(playerid, 623.000000, 255.000000, "ld_beat:chit");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][23], 6.000000, 6.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][23], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][23], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][23], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][23], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][23], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][23], true);
    
    StaticNSrp[playerid][24] = CreatePlayerTextDraw(playerid, 620.000000, 257.000000, "ld_beat:chit");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][24], 4.500000, 5.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][24], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][24], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][24], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][24], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][24], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][24], true);
    
    StaticNSrp[playerid][25] = CreatePlayerTextDraw(playerid, 627.000000, 257.000000, "ld_beat:chit");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][25], 4.500000, 5.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][25], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][25], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][25], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][25], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][25], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][25], true);
    
    StaticNSrp[playerid][26] = CreatePlayerTextDraw(playerid, 620.000000, 261.000000, "ld_beat:chit");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][26], 12.500000, 5.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][26], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][26], -1293159681);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][26], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][26], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][26], 1);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][26], true);
    
    StaticNSrp[playerid][27] = CreatePlayerTextDraw(playerid, 614.000000, 137.000000, "100/800");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][27], 637.000000, 17.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][27], 3);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][27], -1);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][27], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][27], 1);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][27], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][27], true);
    PlayerTextDrawLetterSize(playerid, StaticNSrp[playerid][27], 0.170000, 0.750000);
    PlayerTextDrawUseBox(playerid, StaticNSrp[playerid][27], false);
    PlayerTextDrawBoxColor(playerid, StaticNSrp[playerid][27], 150);
    
    StaticNSrp[playerid][28] = CreatePlayerTextDraw(playerid, 614.000000, 161.000000, "#50");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][28], 637.000000, 17.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][28], 3);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][28], -1);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][28], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][28], 1);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][28], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][28], true);
    PlayerTextDrawLetterSize(playerid, StaticNSrp[playerid][28], 0.170000, 0.750000);
    PlayerTextDrawUseBox(playerid, StaticNSrp[playerid][28], false);
    PlayerTextDrawBoxColor(playerid, StaticNSrp[playerid][28], 150);
    
    StaticNSrp[playerid][29] = CreatePlayerTextDraw(playerid, 614.000000, 185.000000, "$10,000.000 Cash");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][29], 637.000000, 17.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][29], 3);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][29], -1);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][29], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][29], 1);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][29], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][29], true);
    PlayerTextDrawLetterSize(playerid, StaticNSrp[playerid][29], 0.170000, 0.750000);
    PlayerTextDrawUseBox(playerid, StaticNSrp[playerid][29], false);
    PlayerTextDrawBoxColor(playerid, StaticNSrp[playerid][29], 150);
    
    StaticNSrp[playerid][30] = CreatePlayerTextDraw(playerid, 614.000000, 209.000000, "$90,000.000 Bank");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][30], 637.000000, 17.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][30], 3);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][30], -1);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][30], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][30], 1);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][30], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][30], true);
    PlayerTextDrawLetterSize(playerid, StaticNSrp[playerid][30], 0.170000, 0.750000);
    PlayerTextDrawUseBox(playerid, StaticNSrp[playerid][30], false);
    PlayerTextDrawBoxColor(playerid, StaticNSrp[playerid][30], 150);
    
    StaticNSrp[playerid][31] = CreatePlayerTextDraw(playerid, 614.000000, 232.000000, "Medis - Tukang Minyak");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][31], 637.000000, 17.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][31], 3);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][31], -1);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][31], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][31], 1);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][31], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][31], true);
    PlayerTextDrawLetterSize(playerid, StaticNSrp[playerid][31], 0.170000, 0.750000);
    PlayerTextDrawUseBox(playerid, StaticNSrp[playerid][31], false);
    PlayerTextDrawBoxColor(playerid, StaticNSrp[playerid][31], 150);
    
    StaticNSrp[playerid][32] = CreatePlayerTextDraw(playerid, 614.000000, 256.000000, "Los Cosa Notra Family");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][32], 637.000000, 17.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][32], 3);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][32], -1);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][32], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][32], 1);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][32], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][32], true);
    PlayerTextDrawLetterSize(playerid, StaticNSrp[playerid][32], 0.170000, 0.750000);
    PlayerTextDrawUseBox(playerid, StaticNSrp[playerid][32], false);
    PlayerTextDrawBoxColor(playerid, StaticNSrp[playerid][32], 150);
    
    StaticNSrp[playerid][33] = CreatePlayerTextDraw(playerid, 617.000000, 183.000000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][33], 15.500000, 14.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][33], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][33], 222798335);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][33], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][33], 4);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][33], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][33], true);
    
    StaticNSrp[playerid][34] = CreatePlayerTextDraw(playerid, 623.000000, 184.000000, "$");
    PlayerTextDrawTextSize(playerid, StaticNSrp[playerid][34], 400.000000, 17.000000);
    PlayerTextDrawAlignment(playerid, StaticNSrp[playerid][34], 1);
    PlayerTextDrawColor(playerid, StaticNSrp[playerid][34], 13128703);
    PlayerTextDrawBackgroundColor(playerid, StaticNSrp[playerid][34], 255);
    PlayerTextDrawFont(playerid, StaticNSrp[playerid][34], 1);
    PlayerTextDrawSetShadow(playerid, StaticNSrp[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, StaticNSrp[playerid][34], 0);
    PlayerTextDrawSetProportional(playerid, StaticNSrp[playerid][34], true);
    PlayerTextDrawLetterSize(playerid, StaticNSrp[playerid][34], 0.194997, 1.049000);
    PlayerTextDrawUseBox(playerid, StaticNSrp[playerid][34], false);
    PlayerTextDrawBoxColor(playerid, StaticNSrp[playerid][34], 150);
}
ShowStatsTD(playerid)
{
    for(new i = 0; i < 35; i++)
    {
        PlayerTextDrawShow(playerid, StaticNSrp[playerid][i]);
    }
    return 1;
}

HideStatsTD(playerid)
{
    for(new i = 0; i < 35; i++)
    {
        PlayerTextDrawHide(playerid, StaticNSrp[playerid][i]);
    }
    return 1;
}

enum e_HUDCache {
    cache_Money,
    cache_Bank,
    cache_Family,
    cache_Job,
    cache_Faction,
    cache_Online
};
new HUDCache[MAX_PLAYERS][e_HUDCache];

stock InitPlayerHUD(playerid)
{
    new str[128];
    
    // Online Players - index 27
    format(str, sizeof(str), "%d/%d", OnlinePlayerAll, MAX_PLAYERS);
    PlayerTextDrawSetString(playerid, StaticNSrp[playerid][27], str);
    HUDCache[playerid][cache_Online] = OnlinePlayerAll;
    
    // Player ID - index 28
    format(str, sizeof(str), "#%d", playerid);
    PlayerTextDrawSetString(playerid, StaticNSrp[playerid][28], str);
    
    // Money - index 29
    format(str, sizeof(str), "%s Cash", FormatMoney(AccountData[playerid][pMoney]));
    PlayerTextDrawSetString(playerid, StaticNSrp[playerid][29], str);
    HUDCache[playerid][cache_Money] = AccountData[playerid][pMoney];
    
    // Bank - index 30
    format(str, sizeof(str), "%s Bank", FormatMoney(AccountData[playerid][pBankMoney]));
    PlayerTextDrawSetString(playerid, StaticNSrp[playerid][30], str);
    HUDCache[playerid][cache_Bank] = AccountData[playerid][pBankMoney];
    
    // Job & Faction - index 31
    format(str, sizeof(str), "%s - %s", GetFactionName(playerid), GetJobName(playerid));
    PlayerTextDrawSetString(playerid, StaticNSrp[playerid][31], str);
    HUDCache[playerid][cache_Job] = AccountData[playerid][pJob];
    HUDCache[playerid][cache_Faction] = AccountData[playerid][pFaction];
    
    // Family - index 32
    new fid = AccountData[playerid][pFamily];
    if(fid != -1)
        format(str, sizeof(str), "%s Family", FamilyData[fid][famName]);
    else
        format(str, sizeof(str), "N/A Family");
    PlayerTextDrawSetString(playerid, StaticNSrp[playerid][32], str);
    HUDCache[playerid][cache_Family] = fid;

    ShowStatsTD(playerid);
}

hook OnPlayerSpawn(playerid)
{
    InitPlayerHUD(playerid);
    return 1;
}

ptask StaticUpdateNSRP[1000](playerid)
{
    if(IsPlayerConnected(playerid) && AccountData[playerid][IsLoggedIn] && AccountData[playerid][pSpawned])
    {
        new str[128];
        new bool:updated = false;

        if(HUDCache[playerid][cache_Online] != OnlinePlayerAll)
        {
            HUDCache[playerid][cache_Online] = OnlinePlayerAll;
            format(str, sizeof(str), "%d/%d", OnlinePlayerAll, MAX_PLAYERS);
            PlayerTextDrawSetString(playerid, StaticNSrp[playerid][27], str);
            updated = true;
        }
        new currentMoney = AccountData[playerid][pMoney];
        if(HUDCache[playerid][cache_Money] != currentMoney)
        {
            HUDCache[playerid][cache_Money] = currentMoney;
            format(str, sizeof(str), "%s Cash", FormatMoney(currentMoney));
            PlayerTextDrawSetString(playerid, StaticNSrp[playerid][29], str);
            updated = true;
        }
        new currentBank = AccountData[playerid][pBankMoney];
        if(HUDCache[playerid][cache_Bank] != currentBank)
        {
            HUDCache[playerid][cache_Bank] = currentBank;
            format(str, sizeof(str), "%s Bank", FormatMoney(currentBank));
            PlayerTextDrawSetString(playerid, StaticNSrp[playerid][30], str);
            updated = true;
        }

        new currentJob = AccountData[playerid][pJob];
        new currentFaction = AccountData[playerid][pFaction];
        if(HUDCache[playerid][cache_Job] != currentJob || HUDCache[playerid][cache_Faction] != currentFaction)
        {
            HUDCache[playerid][cache_Job] = currentJob;
            HUDCache[playerid][cache_Faction] = currentFaction;
            format(str, sizeof(str), "%s - %s", GetFactionName(playerid), GetJobName(playerid));
            PlayerTextDrawSetString(playerid, StaticNSrp[playerid][31], str);
            updated = true;
        }

        new currentFamily = AccountData[playerid][pFamily];
        if(HUDCache[playerid][cache_Family] != currentFamily)
        {
            HUDCache[playerid][cache_Family] = currentFamily;
            if(currentFamily != -1)
                format(str, sizeof(str), "%s Family", FamilyData[currentFamily][famName]);
            else
                format(str, sizeof(str), "N/A Family");
            PlayerTextDrawSetString(playerid, StaticNSrp[playerid][32], str);
            updated = true;
        }
        if(updated)
        {
            ShowStatsTD(playerid);
        }
    }
    return 1;
}

hook OnPlayerConnect(playerid)
{
    OnlinePlayerAll++;
    for(new i = 0; i < _:e_HUDCache; i++)
    {
        HUDCache[playerid][e_HUDCache:i] = -1;
    }
    return 1;
}

hook OnPlayerDisconnect(playerid)
{
    OnlinePlayerAll--;
    return 1;
}