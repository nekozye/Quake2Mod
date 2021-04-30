/*
Copyright (C) 1997-2001 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

typedef struct weapondata_s{
	char* gun_name_internal;
	int bullet_number;
}weapondata_t;


int get_bulletcheck(char* name);



void Val_BuyMenu(edict_t *ent);

qboolean Val_isSideArm(gitem_t* gun);
qboolean Val_isMainWeap(gitem_t* gun);
qboolean Val_isValWeapon(gitem_t* item);

void Val_GetWeapon(edict_t *ent, gitem_t *gun);
void Val_GetWepCom(edict_t *ent, char* name);

void Val_CustomUse(edict_t * ent, char* name);

void Val_SelectSecondary(edict_t *ent);
void Val_SelectPrimary(edict_t *ent);


void ValoClassic(edict_t *ent, pmenuhnd_t *p);
void ValoShorty(edict_t *ent, pmenuhnd_t *p);
void ValoFrenzy(edict_t *ent, pmenuhnd_t *p);
void ValoGhost(edict_t *ent, pmenuhnd_t *p);
void ValoSheriff(edict_t *ent, pmenuhnd_t *p);
/*

void ValoStinger(edict_t *ent, pmenuhnd_t *p);
void ValoSpectre(edict_t *ent, pmenuhnd_t *p);

void ValoBucky(edict_t *ent, pmenuhnd_t *p);
void ValoJudge(edict_t *ent, pmenuhnd_t *p);

void ValoBulldog(edict_t *ent, pmenuhnd_t *p);
void ValoGuardian(edict_t *ent, pmenuhnd_t *p);
void ValoPhantom(edict_t *ent, pmenuhnd_t *p);
void ValoVandal(edict_t *ent, pmenuhnd_t *p);

void ValoMarshal(edict_t *ent, pmenuhnd_t *p);
void ValoOperator(edict_t *ent, pmenuhnd_t *p);

void ValoAres(edict_t *ent, pmenuhnd_t *p);
void ValoOdin(edict_t *ent, pmenuhnd_t *p);
*/

void ValoOpenSidearmMenu(edict_t *ent, pmenuhnd_t *p);
void ValoOpenSMGMenu(edict_t *ent, pmenuhnd_t *p);
void ValoOpenShotgunMenu(edict_t *ent, pmenuhnd_t *p);
void ValoOpenRifleMenu(edict_t *ent, pmenuhnd_t *p);
void ValoOpenSniperMenu(edict_t *ent, pmenuhnd_t *p);
void ValoOpenHeavyMenu(edict_t *ent, pmenuhnd_t *p);
void ValoOpenAbilityMenu(edict_t *ent);

void ValoCloseMenu(edict_t *ent, pmenuhnd_t *p);
void ValoOpenBuyMenu(edict_t *ent);