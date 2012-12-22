
#include "Globals.h"  // NOTE: MSVC stupidness requires this to be the same across all modules

#include "Enderman.h"





cEnderman::cEnderman(void) :
	super("Enderman", 58, "mob.endermen.hit", "mob.endermen.death")
{
}





void cEnderman::Tick(float a_Dt, MTRand & a_TickRandom)
{
	cMonster::Tick(a_Dt, a_TickRandom);

	// TODO Same as stated in cSkeleton
	if ((GetWorld()->GetTimeOfDay() < (12000 + 1000)) && (GetMetaData() != BURNING))
	{
		SetMetaData(BURNING); // BURN, BABY, BURN!  >:D
	}
}





void cEnderman::GetDrops(cItems & a_Drops, cPawn * a_Killer)
{
	AddRandomDropItem(a_Drops, 0, 1, E_ITEM_ENDER_PEARL);
}




