sleep 999999;
if (isServer) then
{
	waitUntil { time > 0 };
	[missionStart select [0, 5]] remoteExec ["setDate"];
};
