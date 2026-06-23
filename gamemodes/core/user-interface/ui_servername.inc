new Text:NameSV[10],
	Text:ServerClockTD[2];

CreateServerNameTD()
{	
	NameSV[0] = TextDrawCreate(465.000000, 45.000000, "/");
    TextDrawTextSize(NameSV[0], 651.000000, 657.000000);
    TextDrawAlignment(NameSV[0], 1);
    TextDrawColor(NameSV[0], 222798335);
    TextDrawBackgroundColor(NameSV[0], 15073279);
    TextDrawFont(NameSV[0], 1);
    TextDrawSetShadow(NameSV[0], 0);
    TextDrawSetOutline(NameSV[0], 0);
    TextDrawSetProportional(NameSV[0], true);
    TextDrawLetterSize(NameSV[0], -0.949998, 2.429999);
    TextDrawUseBox(NameSV[0], false);
    TextDrawBoxColor(NameSV[0], 150);
    TextDrawSetSelectable(NameSV[0], false);
    
    NameSV[1] = TextDrawCreate(459.000000, 52.000000, "/");
    TextDrawTextSize(NameSV[1], 640.000000, 640.000000);
    TextDrawAlignment(NameSV[1], 1);
    TextDrawColor(NameSV[1], 563540991);
    TextDrawBackgroundColor(NameSV[1], -1);
    TextDrawFont(NameSV[1], 1);
    TextDrawSetShadow(NameSV[1], 0);
    TextDrawSetOutline(NameSV[1], 0);
    TextDrawSetProportional(NameSV[1], true);
    TextDrawLetterSize(NameSV[1], 0.819998, 1.620000);
    TextDrawUseBox(NameSV[1], false);
    TextDrawBoxColor(NameSV[1], 150);
    TextDrawSetSelectable(NameSV[1], false);
    
    NameSV[2] = TextDrawCreate(476.000000, 52.000000, "/");
    TextDrawTextSize(NameSV[2], 625.000000, 631.000000);
    TextDrawAlignment(NameSV[2], 1);
    TextDrawColor(NameSV[2], 61469951);
    TextDrawBackgroundColor(NameSV[2], -1293159681);
    TextDrawFont(NameSV[2], 1);
    TextDrawSetShadow(NameSV[2], 0);
    TextDrawSetOutline(NameSV[2], 0);
    TextDrawSetProportional(NameSV[2], true);
    TextDrawLetterSize(NameSV[2], -0.559997, 1.639999);
    TextDrawUseBox(NameSV[2], false);
    TextDrawBoxColor(NameSV[2], 150);
    TextDrawSetSelectable(NameSV[2], false);
    
    NameSV[3] = TextDrawCreate(471.000000, 52.000000, "/");
    TextDrawTextSize(NameSV[3], 651.000000, 657.000000);
    TextDrawAlignment(NameSV[3], 1);
    TextDrawColor(NameSV[3], 222798335);
    TextDrawBackgroundColor(NameSV[3], 222798335);
    TextDrawFont(NameSV[3], 1);
    TextDrawSetShadow(NameSV[3], 0);
    TextDrawSetOutline(NameSV[3], 0);
    TextDrawSetProportional(NameSV[3], true);
    TextDrawLetterSize(NameSV[3], 0.720000, 1.739997);
    TextDrawUseBox(NameSV[3], false);
    TextDrawBoxColor(NameSV[3], 150);
    TextDrawSetSelectable(NameSV[3], false);
    
    NameSV[4] = TextDrawCreate(464.000000, 46.000000, "/");
    TextDrawTextSize(NameSV[4], 651.000000, 657.000000);
    TextDrawAlignment(NameSV[4], 1);
    TextDrawColor(NameSV[4], 563540991);
    TextDrawBackgroundColor(NameSV[4], 150);
    TextDrawFont(NameSV[4], 1);
    TextDrawSetShadow(NameSV[4], 0);
    TextDrawSetOutline(NameSV[4], 0);
    TextDrawSetProportional(NameSV[4], true);
    TextDrawLetterSize(NameSV[4], -0.869997, 2.389997);
    TextDrawUseBox(NameSV[4], false);
    TextDrawBoxColor(NameSV[4], 150);
    TextDrawSetSelectable(NameSV[4], false);
    
    NameSV[5] = TextDrawCreate(459.000000, 53.000000, "/");
    TextDrawTextSize(NameSV[5], 640.000000, 640.000000);
    TextDrawAlignment(NameSV[5], 1);
    TextDrawColor(NameSV[5], 222798335);
    TextDrawBackgroundColor(NameSV[5], 150);
    TextDrawFont(NameSV[5], 1);
    TextDrawSetShadow(NameSV[5], 0);
    TextDrawSetOutline(NameSV[5], 0);
    TextDrawSetProportional(NameSV[5], true);
    TextDrawLetterSize(NameSV[5], 0.819998, 1.620000);
    TextDrawUseBox(NameSV[5], false);
    TextDrawBoxColor(NameSV[5], 150);
    TextDrawSetSelectable(NameSV[5], false);
    
    NameSV[6] = TextDrawCreate(475.000000, 53.000000, "/");
    TextDrawTextSize(NameSV[6], 625.000000, 631.000000);
    TextDrawAlignment(NameSV[6], 1);
    TextDrawColor(NameSV[6], 222798335);
    TextDrawBackgroundColor(NameSV[6], -1293159681);
    TextDrawFont(NameSV[6], 1);
    TextDrawSetShadow(NameSV[6], 0);
    TextDrawSetOutline(NameSV[6], 0);
    TextDrawSetProportional(NameSV[6], true);
    TextDrawLetterSize(NameSV[6], -0.559997, 1.639999);
    TextDrawUseBox(NameSV[6], false);
    TextDrawBoxColor(NameSV[6], 150);
    TextDrawSetSelectable(NameSV[6], false);
    
    NameSV[7] = TextDrawCreate(472.000000, 52.000000, "/");
    TextDrawTextSize(NameSV[7], 651.000000, 657.000000);
    TextDrawAlignment(NameSV[7], 1);
    TextDrawColor(NameSV[7], 563540991);
    TextDrawBackgroundColor(NameSV[7], 150);
    TextDrawFont(NameSV[7], 1);
    TextDrawSetShadow(NameSV[7], 0);
    TextDrawSetOutline(NameSV[7], 0);
    TextDrawSetProportional(NameSV[7], true);
    TextDrawLetterSize(NameSV[7], 0.660000, 1.769997);
    TextDrawUseBox(NameSV[7], false);
    TextDrawBoxColor(NameSV[7], 150);
    TextDrawSetSelectable(NameSV[7], false);
    
    NameSV[8] = TextDrawCreate(476.000000, 51.000000, "LD_BEAT:chit");
    TextDrawTextSize(NameSV[8], 10.000000, -9.000000);
    TextDrawAlignment(NameSV[8], 1);
    TextDrawColor(NameSV[8], 222798335);
    TextDrawBackgroundColor(NameSV[8], 0);
    TextDrawFont(NameSV[8], 4);
    TextDrawSetShadow(NameSV[8], 0);
    TextDrawSetOutline(NameSV[8], 0);
    TextDrawSetProportional(NameSV[8], true);
    TextDrawSetSelectable(NameSV[8], false);
    
    NameSV[9] = TextDrawCreate(476.000000, 52.000000, "LD_BEAT:chit");
    TextDrawTextSize(NameSV[9], 10.000000, -9.000000);
    TextDrawAlignment(NameSV[9], 1);
    TextDrawColor(NameSV[9], 61469951);
    TextDrawBackgroundColor(NameSV[9], 0);
    TextDrawFont(NameSV[9], 4);
    TextDrawSetShadow(NameSV[9], 0);
    TextDrawSetOutline(NameSV[9], 0);
    TextDrawSetProportional(NameSV[9], true);
    TextDrawSetSelectable(NameSV[9], false);

	ServerClockTD[0] = TextDrawCreate(577.000000, 8.000000, "30 Desember 2025");
	TextDrawFont(ServerClockTD[0], 1);
	TextDrawLetterSize(ServerClockTD[0], 0.266665, 1.299998);
	TextDrawTextSize(ServerClockTD[0], 400.000000, 102.000000);
	TextDrawSetOutline(ServerClockTD[0], 1);
	TextDrawSetShadow(ServerClockTD[0], 0);
	TextDrawAlignment(ServerClockTD[0], 2);
	TextDrawColor(ServerClockTD[0], -1);
	TextDrawBackgroundColor(ServerClockTD[0], 255);
	TextDrawBoxColor(ServerClockTD[0], 50);
	TextDrawUseBox(ServerClockTD[0], 0);
	TextDrawSetProportional(ServerClockTD[0], 1);
	TextDrawSetSelectable(ServerClockTD[0], 0);

	ServerClockTD[1] = TextDrawCreate(579.000000, 20.000000, "23:59:54");
	TextDrawFont(ServerClockTD[1], 1);
	TextDrawLetterSize(ServerClockTD[1], 0.354166, 1.799998);
	TextDrawTextSize(ServerClockTD[1], 400.000000, 72.000000);
	TextDrawSetOutline(ServerClockTD[1], 1);
	TextDrawSetShadow(ServerClockTD[1], 0);
	TextDrawAlignment(ServerClockTD[1], 2);
	TextDrawColor(ServerClockTD[1], -1);
	TextDrawBackgroundColor(ServerClockTD[1], 255);
	TextDrawBoxColor(ServerClockTD[1], 50);
	TextDrawUseBox(ServerClockTD[1], 0);
	TextDrawSetProportional(ServerClockTD[1], 1);
	TextDrawSetSelectable(ServerClockTD[1], 0);
}

ShowServerNameTD(playerid)
{
	for(new x; x < 10; x++)
    {
    	TextDrawShowForPlayer(playerid, NameSV[x]);
	}
}

HideServerNameTD(playerid)
{
    for(new x; x < 10; x++)
    {
        TextDrawHideForPlayer(playerid, NameSV[x]);
    }
}

ShowClockTD(playerid)
{
	TextDrawShowForPlayer(playerid, ServerClockTD[0]);
	TextDrawShowForPlayer(playerid, ServerClockTD[1]);
}