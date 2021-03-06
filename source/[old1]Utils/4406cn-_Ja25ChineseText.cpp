﻿//#pragma setlocale("CHINESE")
#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
	#include "_Ja25Englishtext.h"
#else
	#include "Language Defines.h"
	#ifdef CHINESE
		#include "text.h"
		#include "Fileman.h"
	#endif
#endif

//suppress : warning LNK4221: no public symbols found; archive member will be inaccessible
void this_is_the_Ja25ChineseText_public_symbol(void){;}

#ifdef CHINESE

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD

STR16	zNewTacticalMessages[]=
{
	//L"目标的距离: %d格, 亮度: %d/%d",
	L"将发报机装到笔记本电脑上。",
	L"你无法支付雇佣%s的费用",
	L"在限定时间内，以上的费用包括了整个行动和下列装备的花费。",
	L"现在就雇请%s吧。您可以享受我们提供的空前的“一次付费，全部服务”的优惠价格。在这个难以置信的出价里，佣兵的随身装备是免费的哦。",	
	L"费用",
	L"在本分区发现有人……",
	//L"枪的射程: %d格， 命中率: %d％",
	L"显示覆盖物",
	L"视距",
	L"新雇请的佣兵无法到达那里。",
	L"由于你的笔记本电脑没有发报机，你无法雇请新的队员。也许你得读取存档或者重新开始游戏！",
	L"%s听到了Jerry的身体下面传来金属的破碎的声音。听起来令人不安，似乎你的笔记本电脑的天线被压断了。", 
	L"看完副指挥官Morris留下的备忘录后，%s觉得有机会了。备忘录里有向Arulco各个城镇发射导弹的基地的坐标。它还给出了这个罪恶计划的发源地的坐标 —— 导弹工厂。",
	L"看到了控制面板后， %s发现它正在倒计时，因此导弹会把这个工厂炸毁。%s得找出个脱逃的路线。使用电梯看起来是最快的办法...",
	L"现在您在铁人模式进行游戏，周围有敌人的时候不能存档。",	
	L"(不能在战斗时存盘)",	
	L"当前的战役名称超过了30个字符。",						
	L"无法找到当前的战役。",											// @@@ new text
	L"战役: 默认 ( %S )",											// @@@ new text
	L"战役: %S",												// @@@ new text
	L"你选择了%S战役。 该战役是原版UB战役的玩家自定义游戏版本。你确认你要在 %S 战役下进行游戏吗?",			
	L"如果你要使用编辑器的话，请选择一个战役，不要用默认战役。",			
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SANDRO - New STOMP laptop strings
//these strings match up with the defines in IMP Skill trait.cpp
STR16 gzIMPSkillTraitsText[]=
{
	// made this more elegant
	L"开锁",	//"Lock picking",
	L"徒手格斗", //"Hand to hand combat",
	L"电子",	//"Electronics",
	L"夜战",	//"Night operations",
	L"投掷",	//"Throwing",
	L"教学",	//"Teaching",
	L"重武器",	//"Heavy Weapons",
	L"自动武器",	//"Auto Weapons",
	L"潜行",	//"Stealth",
	L"双手武器",	//"Ambidextrous",
	L"刀技",	//"Knifing",
	L"狙击手",	//"Sniper",
	L"伪装",	//"Camouflage",
	L"武术",	//"Martial Arts",

	L"无",	//"None",
	L"I.M.P 专属技能",	//"I.M.P. Specialties",
	L"(Expert)",

};

//added another set of skill texts for new major traits
STR16 gzIMPSkillTraitsTextNewMajor[]=
{
	L"自动武器",// L"Auto Weapons",
	L"重武器",// L"Heavy Weapons",
	L"射手",// L"Marksman",
	L"猎手",// L"Hunter",
	L"枪手",// L"Gunslinger",
	L"格斗家",// L"Hand to Hand",
	L"领导",// L"Deputy",
	L"技师",// L"Technician",
	L"救护兵",// L"Paramedic",

	L"无",// L"None",
	L"I.M.P 主要特殊技能",// L"I.M.P. Major Traits",
	// second names
	L"机枪手",// L"Machinegunner",
	L"炮弹专家",// L"Bombardier",
	L"狙击手",// L"Sniper",
	L"游侠",// L"Ranger",
	L"枪战大师",// L"Gunfighter",
	L"武术大师",// L"Martial Arts",
	L"干部",// L"Squadleader",
	L"工兵",// L"Engineer",
	L"医生",// L"Doctor",
};

//added another set of skill texts for new minor traits
STR16 gzIMPSkillTraitsTextNewMinor[]=
{
	L"左右互搏之术",// L"Ambidextrous",
	L"近战",// L"Melee",
	L"投掷",// L"Throwing",
	L"夜战",// L"Night Ops",
	L"尾行",// L"Stealthy",
	L"体能训练",// L"Athletics",
	L"肌肉男",// L"Bodybuilding",
	L"爆破",// L"Demolitions",
	L"教学",// L"Teaching",
	L"侦察",// L"Scouting",

	L"无",// L"None",
	L"I.M.P 副技能",// L"I.M.P. Minor Traits",
};

//these texts are for help popup windows, describing trait properties
STR16 gzIMPMajorTraitsHelpTextsAutoWeapons[]=
{
	L"突击步枪命中率 +%d%s\n",// L"+%d%s Chance to Hit with Assault Rifles\n",
	L"冲锋枪命中率 +%d%s\n",// L"+%d%s Chance to Hit with SMGs\n",
	L"轻机枪命中率 +%d%s\n",// L"+%d%s Chance to Hit with LMGs\n",
	L"轻机枪射击所需行动点 -%d%s\n",//L"-%d%s APs needed to fire with LMGs\n",
	L"端起轻机枪所需行动点 -%d%s\n",//L"-%d%s APs needed to ready light machine guns\n",
	L"自动/点射的命中率惩罚减去 %d%s\n",//L"Auto fire/burst chance to hit penalty is reduced by %d%s\n",
	L"降低浪费子弹的几率\n",//L"Reduced chance for shooting unwanted bullets on autofire\n",

};
STR16 gzIMPMajorTraitsHelpTextsHeavyWeapons[]=
{
	L"发射榴弹所需行动点 -%d%s\n",// L"-%d%s APs needed to fire grenade launchers\n",
	L"发射火箭所需行动点 -%d%s\n",// L"-%d%s APs needed to fire rocket launchers\n",
	L"榴弹命中率 +%d%s\n",// L"+%d%s chance to hit with grenade launchers\n",
	L"火箭命中率 +%d%s\n",// L"+%d%s chance to hit with rocket launchers\n",
	L"发射迫击炮所需行动点 -%d%s\n",// L"-%d%s APs needed to fire mortar\n",
	L"降低 %d%s 迫击炮命中率惩罚\n",// L"Reduce penalty for mortar CtH by %d%s\n",
	L"爆破物, 手榴弹和重武器对坦克的额外伤害 +%d%s\n",// L"+%d%s damage to tanks with heavy weapons, grenades and explosives\n",
	L"重武器对其他目标的伤害 +%d%s\n",// L"+%d%s damage to other targets with heavy weapons\n",

};
STR16 gzIMPMajorTraitsHelpTextsSniper[]=
{
	L"步枪命中率 +%d%s\n",
	L"狙击步枪命中率 +%d%s\n",// L"+%d%s Chance to Hit with Sniper Rifles\n",
	L"拉近和目标 %d%s 的有效距离\n",// L"-%d%s effective range to target with all weapons\n",
	L"每次精确瞄准的额外瞄准加成 +%d%s (手枪除外)\n",// L"+%d%s aiming bonus per aim click (except for handguns)\n",
	L"每发伤害 +%d%s",// L"+%d%s damage on shot",
	L"加上",// L" plus",
	L"每次精瞄",// L" per every aim click",
	L"第一次精瞄后",// L" after first",
	L"第二次精瞄后",// L" after second",
	L"第三次精瞄后",// L" after third",
	L"第四次精瞄后",// L" after fourth",
	L"第五次精瞄后",// L" after fifth",
	L"第六次精瞄后",// L" after sixth",
	L"第七次精瞄后",// L" after seventh",
	L"手动枪机式步枪拉枪栓所需行动点 -%d%s \n",// L"-%d%s APs needed to chamber a round with bolt-action rifles \n",
	L"步枪精确瞄准次数增加1次\n",// L"Adds one more aim click for rifle-type guns\n",
	L"步枪精确瞄准次数增加 %d\n",// L"Adds %d more aim clicks for rifle-type guns\n",

};
STR16 gzIMPMajorTraitsHelpTextsRanger[]=
{
	L"步枪命中率 +%d%s\n",// L"+%d%s Chance to Hit with Rifles\n",
	L"霰弹枪命中率 +%d%s\n",// L"+%d%s Chance to Hit with Shotguns\n",
	L"泵动式霰弹上膛所需行动点 -%d%s \n",// L"-%d%s APs needed to pump Shotguns\n",
	L"队伍在区域间步行移动的速度 +%d%s\n",// L"+%d%s group travelling speed between sectors if traveling by foot\n",
	L"队伍在区域间乘车移动的速度(直升机除外) +%d%s \n",// L"+%d%s group travelling speed between sectors if traveling in vehicle (except helicopter)\n",
	L"区域间移动时消耗的体力 -%d%s\n",// L"-%d%s less energy spent for travelling between sectors\n",
	L"天气效果的惩罚 -%d%s\n",// L"-%d%s weather penalties\n",
	L"迷彩涂装效果 +%d%s\n",// L"+%d%s camouflage effectiveness\n",
	L"迷彩涂装退色的速度 -%d%s\n",// L"-%d%s worn out speed of camouflage by water or time\n",

};
STR16 gzIMPMajorTraitsHelpTextsGunslinger[]=
{
	L"发射手枪和左轮所需行动点 -%d%s\n",// L"-%d%s APs needed to fire with pistols and revolvers\n",
	L"手枪和左轮的有效射程 +%d%s\n",// L"+%d%s effective range with pistols and revolvers\n",
	L"手枪和左轮的命中率 +%d%s\n",// L"+%d%s chance to hit with pistols and revolvers\n",
	L"冲锋手枪的命中率 +%d%s",// L"+%d%s chance to hit with machine pistols",
	L"(只限单发)",// L" (on single shots only)",
	L"手枪, 左轮和冲锋手枪每次精确瞄准的瞄准加成 +%d%s\n",// L"+%d%s aiming bonus per click with pistols, machine pistols and revolvers\n",
	L"手枪和左轮抬枪瞄准所需行动点 -%d%s\n",// L"-%d%s APs needed to raise pistols and revolvers\n",
	L"手枪, 冲锋手枪和左轮装填弹药所需行动点-%d%s\n",// L"-%d%s APs needed to reload pistols, machine pistols and revolvers\n",
	L"手枪, 左轮和冲锋手枪的精确瞄准次数增加%d\n",// L"Adds %d more aim click for pistols, machine pistols and revolvers\n",
	L"手枪, 左轮和冲锋手枪的精确瞄准次数增加%d\n",// L"Adds %d more aim clicks for pistols, machine pistols and revolvers\n",

};
STR16 gzIMPMajorTraitsHelpTextsMartialArts[]=
{
	L"肉搏攻击所需行动点 -%d%s(空手或戴铜拳套)\n",// L"-%d%s AP cost of hand to hand attacks(bare hands or with brass knuckles)\n",
	L"肉搏命中率 +%d%s\n",// L"+%d%s chance to hit with hand to hand attacks with bare hands\n",
	L"铜拳套命中率 +%d%s\n",// L"+%d%s chance to hit with hand to hand attacks with brass knuckles\n",
	L"肉搏攻击伤害 +%d%s(空手或戴铜拳套)\n",// L"+%d%s damage of hand to hand attacks(bare hands or with brass knuckles)\n",
	L"肉搏攻击的体力伤害 +%d%s(空手或戴铜拳套)\n",// L"+%d%s breath damage of hand to hand attacks(bare hands or with brass knuckles)\n",
	L"被你徒手击倒的敌人要喘息片刻才能站起来\n",// L"Enemy knocked out due to your HtH attacks takes slightly longer to recuperate\n",
	L"被你徒手击倒的敌人要休息片刻才能回过神来\n",// L"Enemy knocked out due to your HtH attacks takes longer to recuperate\n",
	L"被你徒手击倒的敌人要一泡尿的功夫才能爬起来\n",// L"Enemy knocked out due to your HtH attacks takes much longer to recuperate\n",
	L"被你徒手击倒的敌人要一盏茶的功夫才能恢复知觉\n",// L"Enemy knocked out due to your HtH attacks takes very long to recuperate\n",
	L"被你徒手击倒的敌人要一顿饭的功夫才能清醒过来\n",// L"Enemy knocked out due to your HtH attacks takes extremely long to recuperate\n",
	L"被你徒手击倒的敌人要昏迷上几个小时\n",// L"Enemy knocked out due to your HtH attacks takes long hours to recuperate\n",
	L"被你徒手击倒的敌人下半辈子就是植物人\n",// L"Enemy knocked out due to your HtH attacks probably never stand up\n",
	L"瞄准了的肉搏攻击造成+%d%s更多的伤害\n",// L"Focused (aimed) punch deals +%d%s more damage\n",
	L"你的独门腿功造成+%d%s更多的伤害\n",// L"Your special spinning kick deals +%d%s more damage\n",
	L"躲避肉搏攻击的几率+%d%s\n",// L"+%d%s change to dodge hand to hand attacks\n",
	L"空手状态下获得%d%s额外的躲避几率",// L"+%d%s on top chance to dodge HtH attacks with bare hands",
	L"或只戴铜拳套",// L" or brass knuckles",
	L"(戴铜拳套时 +%d%s)",// L" (+%d%s with brass knuckles)",
	L"戴铜拳套时获得 %d%s 额外的躲避几率\n",// L"+%d%s on top chance to dodge HtH attacks with brass knuckles\n",
	L"躲避冷兵器攻击的几率 +%d%s\n",// L"+%d%s chance to dodge attacks by any melee weapon\n",
	L"从敌人手里夺枪所需行动点 -%d%s\n",// L"-%d%s APs needed to steal weapon from enemy hands\n",
	L"站立, 下蹲, 卧倒, 转身, 爬上爬下和越过障碍所需行动点 -%d%s\n",// L"-%d%s APs needed to change state (stand, crouch, lie down), turn around, climb on/off roof and jump obstacles\n",
	L"站立, 下蹲和卧倒所需行动点 -%d%s\n",// L"-%d%s APs needed to change state (stand, crouch, lie down)\n",
	L"转身所需行动点 -%d%s\n",// L"-%d%s APs needed to turn around\n",
	L"上/下房顶所需行动点 -%d%s\n",// L"-%d%s APs needed to climb on/off roof and jump obstacles\n",
	L"踢门成功率 +%d%s\n",// L"+%d%s chance to kick doors\n",
	L"你的肉搏攻击将有特殊的动画效果\n",// L"You gain special animations for hand to hand combat\n",

};
STR16 gzIMPMajorTraitsHelpTextsSquadleader[]=
{
	L"所在区域其他雇佣兵的最大行动点 +%d%s\n",// L"+%d%s APs per round of other mercs in vicinity\n",
	L"有效等级 +%d, %s 所在区域等级低于自己的雇佣兵 (程序参数问题只能用这个语序)\n",// L"+%d effective exp level of other mercs in vicinity, which have lesser level than the %s\n",
	L"计算友军火力压制奖励时, +%d有效经验等级\n",// L"+%d effective exp level to count as a standby when counting friends' bonus for suppression\n",
	L"+%d%s 所在区域内其他雇佣兵和%s自己的最高火力压制承受力\n",// L"+%d%s total suppression tolerance of other mercs in vicinity and %s himself\n",
	L"所在区域其他雇佣兵的士气增加速度 +%d \n",// L"+%d morale gain of other mercs in vicinity\n",
	L"所在区域其他雇佣兵的士气降低速度 -%d \n",// L"-%d morale loss of other mercs in vicinity\n",
	L"奖励范围是 %d 格",// L"The vicinity for bonuses is %d tiles",
	L"(装备助听器后奖励范围增加到 %d 格)",// L" (%d tiles with extended ears)",
	L"(叠加效果最多是 %d 次)\n",// L"(Max simultaneous bonuses for one soldier is %d)\n",
	L"+%d%s %s的恐惧抵抗力 (程序参数问题只能用这个语序)\n",// L"+%d%s fear resistence of %s\n",
	L"缺陷: 会给其他人造成 %d 倍的士气下降, 如果 %s 的阵亡的话 (程序参数问题只能用这个语序)\n",// L"Drawback: %dx morale loss for %s's death for all other mercs\n",

};
STR16 gzIMPMajorTraitsHelpTextsTechnician[]=
{
	L"维修速度 +%d%s \n",// L"+%d%s to repairing speed\n",
	L"开锁成功率 +%d%s(普通/电子锁)\n",// L"+%d%s to lockpicking (normal/electronic locks)\n",
	L"几率解除电陷阱 +%d%s\n",// L"+%d%s to disarming electronic traps\n",
	L"组装物品和组合特殊物品成功率 +%d%s\n",// L"+%d%s to attaching special items and combining things\n",
	L"战斗中排除枪械故障的成功率 +%d%s\n",// L"+%d%s to unjamming a gun in combat\n",
	L"修理电子物品的惩罚降低 %d%s\n",// L"Reduce penalty to repair electronic items by %d%s\n",
	L"增加发现陷阱和地雷的几率 ( +%d 洞察等级)\n",// L"Increased chance to detect traps and mines (+%d detect level)\n",
	L"+%d%s 的命中率, 由%s控制的机器人 (程序参数问题只能用这个语序)\n",// L"+%d%s CtH of robot controlled by the %s\n",
	L"只有 %s 可以修理机器人\n",// L"%s trait grants you the ability to repair the robot\n",
	L"修理机器人的速度惩罚降低 %d%s\n",// L"Reduced penalty to repair speed of the robot by %d%s\n",
};
STR16 gzIMPMajorTraitsHelpTextsDoctor[]=
{
	L"用医疗包包扎时可以给伤者进行手术\n",// L"Has ability to make surgical intervention by using medical bag on wounded soldier\n",
	L"手术会立即回复 %d%s 损失的生命值.",// L"Surgery instantly returns %d%s of lost health back.",
	L"(同时大量消耗医疗包.)",// L" (This drains the medical bag a lot.)",
	L"可治疗又致命一击造成的损失的属性点, 通过",// L"Can heal lost stats (from critical hits) by the",
	L"手术",// L" surgery or",
	L"或指派其为医生.\n",// L" doctor assignment.\n",
	L"疗伤效率 +%d%s\n",// L"+%d%s effectiveness on doctor-patient assignment\n",
	L"包扎速度 +%d%s\n",// L"+%d%s bandaging speed\n",
	L"所在区域自然回复生命值速度 +%d%s",// L"+%d%s natural regeneration speed of all soldiers in the same sector",
	L"(这种效果最多叠加 %d 次)",// L" (max %d these bonuses per sector)",

};
STR16 gzIMPMajorTraitsHelpTextsNone[]=
{
	L"无奖励",// L"No bonuses",
};

STR16 gzIMPMinorTraitsHelpTextsAmbidextrous[]=
{
	L"双持武器的惩罚降低 %d%s\n",// L"Reduce penalty to shoot dual weapons by %d%s\n",
	L"弹匣类武器上弹速度 +%d%s\n",// L"+%d%s speed of reloading guns with magazines\n",
	L"零散弹药装填速度 +%d%s\n",// L"+%d%s speed of reloading guns with loose rounds\n",
	L"拾物品所需行动点 -%d%s\n",// L"-%d%s APs needed to pickup items\n",
	L"使用大背包所需行动点 -%d%s\n",// L"-%d%s APs needed to work backpack\n",
	L"开关门所需行动点 -%d%s\n",// L"-%d%s APs needed to handle doors\n",
	L"安置/拆除炸弹和地雷所需行动点 -%d%s\n",// L"-%d%s APs needed to plant/remove bombs and mines\n",
	L"组装物品所需行动点 -%d%s\n",// L"-%d%s APs needed to attach items\n",
};
STR16 gzIMPMinorTraitsHelpTextsMelee[]=
{
	L"使用刀具所需行动点 -%d%s\n",// L"-%d%s APs needed to attack by blades\n",
	L"刀具命中率 +%d%s\n",// L"+%d%s chance to hit with blades\n",
	L"钝器命中率 +%d%s\n",// L"+%d%s chance to hit with blunt melee weapons\n",
	L"刀具的杀伤力 +%d%s\n",// L"+%d%s damage of blades\n",
	L"钝器的杀伤力 +%d%s\n",// L"+%d%s damage of blunt melee weapons\n",
	L"瞄准了的近战武器攻击造成 +%d%s伤害\n",// L"Aimed attack by any melee weapon deals +%d%s damage\n",
	L"躲避刀具攻击的几率 +%d%s\n",// L"+%d%s chance to dodge attack by melee blades\n",
	L"持刀状态下, +%d%s 额外的刀具躲避率\n",// L"+%d%s on top chance to dodge melee blades if having a blade in hands\n",
	L"躲避钝器攻击的几率+%d%s\n",// L"+%d%s chance to dodge attack by blunt melee weapons\n",
	L"持刀状态下, +%d%s 额外的钝器躲避率\n",// L"+%d%s on top chance to dodge blunt melee weapons if having a blade in hands\n",

};
STR16 gzIMPMinorTraitsHelpTextsThrowing[]=
{
	L"投掷飞刀所需基础行动点 -%d%s\n",// L"-%d%s basic APs needed to throw blades\n",
	L"飞刀的投掷最远距离 +%d%s\n",// L"+%d%s max range when throwing blades\n",
	L"飞刀的命中率 +%d%s\n",// L"+%d%s chance to hit when throwing blades\n",
	L"投掷飞刀时每次精瞄 +%d%s 命中率\n",// L"+%d%s chance to hit when throwing blades per aim click\n",
	L"飞刀的伤害 +%d%s\n",// L"+%d%s damage of throwing blades\n",
	L"投掷飞刀时每次精瞄 +%d%s 伤害\n",// L"+%d%s damage of throwing blades per aim click\n",
	L"在没被敌人察觉的情况下, +%d%s 飞刀致命一击率\n",// L"+%d%s chance to inflict critical hit by throwing blade if not seen or heard\n",
	L"飞刀致命一击的额外伤害为 %d 倍\n",// L"+%d critical hit by throwing blade multiplier\n",
	L"飞刀的最大精瞄次数增加 %d\n",// L"Adds %d more aim click for throwing blades\n",
	L"飞刀的最大精瞄次数增加 %d\n",// L"Adds %d more aim clicks for throwing blades\n",

};
STR16 gzIMPMinorTraitsHelpTextsNightOps[]=
{
	L"黑暗中视距 +%d\n",// L"+%d to effective sight range in dark\n",
	L"综合听力范围 +%d\n",// L"+%d to general effective hearing range\n",
	L"黑暗中额外 +%d 听力范围\n",// L"+%d to effective hearing range in dark on top\n",
	L"黑暗中中断率 +%d\n",// L"+%d to interrupts modifier in dark\n",
	L"睡眠的需求 -%d\n",// L"-%d need to sleep\n",

};
STR16 gzIMPMinorTraitsHelpTextsStealthy[]=
{
	L"潜行所需行动点 -%d%s\n",// L"-%d%s APs needed to move quietly\n",
	L"潜行保持无声的几率 +%d%s\n",// L"+%d%s chance to move quietly\n",
	L"隐蔽性 +%d%s (没被发现时就是“隐形”状态)\n",// L"+%d%s stealth (being 'invisible' if unnoticed)\n",
	L"降低移动给隐蔽程度 %d%s 的惩罚\n",// L"Reduced cover penalty for movement by %d%s\n",

};
STR16 gzIMPMinorTraitsHelpTextsAthletics[]=
{
	L"跑，走，蹲走，爬，游泳等动作所需的行动点 -%d%s\n",// L"-%d%s APs needed for moving (running, walking, swatting, crawling, swimming, etc.)\n",
	L"移动，游泳，爬高等动作所消耗的体能 -%d%s\n",// L"-%d%s energy spent for movement, roof-climbing, obstacle-jumping, swimming, etc.\n",
};
STR16 gzIMPMinorTraitsHelpTextsBodybuilding[]=
{
	L"有 %d%s 的伤害抵抗力\n",// L"Has %d%s damage resistance\n",
	L"有效力量 +%d%s, 作为最大携带重量\n",// L"+%d%s effective strength for carrying weight capacity \n",
	L"被徒手攻击造成的体力损失降低 %d%s\n",// L"Reduced energy lost when hit by HtH attack by %d%s\n",
	L"使角色跌倒所需的腿部伤害增加 %d%s\n",// L"Increased damage needed to fall down if hit to legs by %d%s\n",

};
STR16 gzIMPMinorTraitsHelpTextsDemolitions[]=
{
	L"投掷手榴弹所需行动点 -%d%s\n",// L"-%d%s APs needed to throw grenades\n",
	L"手榴弹最远投掷距离 +%d%s\n",// L"+%d%s max range when throwing grenades\n",
	L"手榴弹的命中率 +%d%s\n",// L"+%d%s chance to hit when throwing grenades\n",
	L"安置的炸弹和地雷的伤害 +%d%s\n",// L"+%d%s damage of set bombs and mines\n",
	L"组合炸弹的成功率 +%d%s\n",// L"+%d%s to attaching detonators check\n",
	L"安置/拆除炸弹成功率 +%d%s\n",// L"+%d%s to planting/removing bombs check\n",
	L"降低敌人发现你的炸弹和地雷的几率 (炸弹等级+%d)\n",// L"Decreases chance enemy will detect your bombs and mines (+%d bomb level)\n",
	L"提高定向炸药破门几率 (伤害乘以 %d)\n",// L"Increased chance shaped charge will open the doors (damage multiplied by %d)\n",

};
STR16 gzIMPMinorTraitsHelpTextsTeaching[]=
{
	L"训练民兵速度 +%d%s\n",// L"+%d%s bonus to militia training speed\n",
	L"训练民兵时， 有效领导能力 +%d%s\n",// L"+%d%s bonus to effective leadership for determining militia training\n",
	L"训练其他雇佣兵的效率 +%d%s\n",// L"+%d%s bonus to teaching other mercs\n",
	L"训练其他人某项属性时, 教官自身的该项能力有效值 +%d\n",// L"Skill value counts to be +%d higher for being able to teach this skill to other mercs\n",
	L"自我锻炼的效率 +%d%s\n",// L"+%d%s bonus to train stats through self-practising assignment\n",

};
STR16 gzIMPMinorTraitsHelpTextsScouting[]=
{
	L"武器上的瞄准镜 +%d 有效视距\n",// L"+%d to effective sight range with scopes on weapons\n",
	L"望远镜和拆卸下来的瞄准镜 +%d 有效视距\n",// L"+%d to effective sight range with binoculars (and scopes separated from weapons)\n",
	L"远镜和拆卸下来的瞄准镜的狭隘视野减少 %d\n",// L"-%d tunnel vision with binoculars (and scopes separated from weapons)\n",
	L"显示邻近区域敌人的准确数量\n",// L"If in sector, adjacent sectors will show exact number of enemies\n",
	L"显示邻近区域敌人的存在\n",// L"If in sector, adjacent sectors will show presence of enemies if any\n",
	L"防止敌人偷袭你的队伍\n",// L"Prevents the enemy to ambush your squad\n",
	L"防止血猫偷袭你的队伍\n",// L"Prevents the bloodcats to ambush your squad\n",

};
STR16 gzIMPMinorTraitsHelpTextsNone[]=
{
	L"无奖励",// L"No bonuses",
};

STR16 gzIMPOldSkillTraitsHelpTexts[]=
{
	L"开锁成功率 +%d%s\n",// L"+%d%s bonus to lockpicking\n",	// 0
	L"肉搏命中率 +%d%s\n",// L"+%d%s hand to hand chance to hit\n",
	L"肉搏伤害 +%d%s\n",// L"+%d%s hand to hand damage\n",
	L"肉搏攻击躲避率 +%d%s\n",// L"+%d%s chance to dodge hand to hand attacks\n",
	L"消除修理和使用电子设备的惩罚（锁， 陷阱， 遥控引爆器， 机器人等）\n",// L"Eliminates the penalty to repair and handle\nelectronic things (locks, traps, rem. detonators, robot, etc.)\n",
	L"黑暗中视距 +%d\n",// L"+%d to effective sight range in dark\n",
	L"综合听力范围 +%d\n",// L"+%d to general effective hearing range\n",
	L"黑暗中额外 +%d 听力范围\n",// L"+%d to effective hearing range in dark on top\n",
	L"黑暗中中断率 +%d\n",// L"+%d to interrupts modifier in dark\n",
	L"睡眠的需求 -%d\n",// L"-%d need to sleep\n",
	L"投掷任何物体的最远距离 +%d%s\n",// L"+%d%s max range when throwing anything\n",	// 10
	L"投掷任何物体的命中率 +%d%s\n",// L"+%d%s chance to hit when throwing anything\n",
	L"未被察觉时飞刀的一击必杀率 +%d%s\n",// L"+%d%s chance to instantly kill by throwing knife if not seen or heard\n",
	L"训练民兵和其他佣兵的速度 +%d%s\n",// L"+%d%s bonus to militia training and other mercs instructing speed\n",
	L"训练民兵时的有效领导能力 +%d%s\n",// L"+%d%s effective leadership for militia training calculations\n",
	L"火箭， 榴弹和迫击炮的命中率 +%d%s\n",// L"+%d%s chance to hit with rocket/greande launchers and mortar\n",
	L"自动/点射模式命中惩罚除以 %d\n",// L"Auto fire/burst chance to hit penalty is divided by %d\n",
	L"降低浪费子弹的几率\n",// L"Reduced chance for shooting unwanted bullets on autofire\n",
	L"潜行保持无声的几率+%d%s\n",// L"+%d%s chance to move quietly\n",
	L"+%d%s 隐蔽性(没被发现就相当于隐身的状态)\n",// L"+%d%s stealth (being 'invisible' if unnoticed)\n",
	L"消除双持武器时的命中惩罚\n",// L"Eliminates the CtH penalty when firing two weapons at once\n",	// 20
	L"刀具攻击的命中率 +%d%s\n",// L"+%d%s chance to hit with melee blades\n",
	L"持刀状态下 +%d%s躲刀几率\n",// L"+%d%s chance to dodge attacks by melee blades if having blade in hands\n",
	L"持其他物品状态下 +%d%s躲刀几率\n",// L"+%d%s chance to dodge attacks by melee blades if having anything else in hands\n",
	L"持刀状态下 +%d%s躲拳几率\n",// L"+%d%s chance to dodge hand to hand attacks if having blade in hands\n",
	L"所有武器的有效射程 -%d%s\n",// L"-%d%s effective range to target with all weapons\n",
	L"每次精瞄 +%d%s瞄准加成\n",// L"+%d%s aiming bonus per aim click\n",
	L"提供永久的迷彩涂装\n",// L"Provides permanent camouflage\n",
	L"肉搏命中率 +%d%s\n",// L"+%d%s hand to hand chance to hit\n",
	L"肉搏伤害 +%d%s\n",// L"+%d%s hand to hand damage\n",
	L"空手状态下 +%d%s的几率躲避肉搏攻击\n",// L"+%d%s chance to dodge hand to hand attacks if having empty hands\n",	// 30
	L"非空手状态下 +%d%s的几率躲避肉搏攻击\n",// L"+%d%s chance to dodge hand to hand attacks if not having empty hands\n",
	L"躲避刀具攻击的几率 +%d%s\n",// L"+%d%s chance to dodge attacks by melee blades\n",
	L"可向虚弱的敌人施展回旋踢， 造成双倍的肉搏伤害\n",// L"Can perform spinning kick attack on weakened enemies to deal double damage\n",
	L"你将得到特别的徒手搏击动画效果\n",// L"You gain special animations for hand to hand combat\n",
	L"无奖励",// L"No bonuses",
};

STR16 gzIMPNewCharacterTraitsHelpTexts[]=
{
	L"优点：无.\n缺点：无.",// L"A: No advantage.\nD: No disadvantage.",
	L"优点：身边有多个雇佣兵时表现最佳.\n缺点：孤单一人时士气不会上升.",// L"A: Has better performance when couple of mercs are nearby.\nD: Gains no morale when no other merc is nearby.",
	L"优点：独自行动时表现最好.\n缺点：在团队中士气不会上升.",// L"A: Has better performance when no other merc is nearby.\nD: Gains no morale when in a group.",
	L"优点：士气上升得快，下降得慢.\n缺点：发现地雷和陷阱的几率降低了.",// L"A: His morale sinks a little slower and grows faster than normal.\nD: Has lesser chance to detect traps and mines.",
	L"优点：更善于训练民兵和跟别人交流.\n缺点：士气不会因为其他队员的行为而上升.",// L"A: Has bonus on training militia and is better at communication with people.\nD: Gains no morale for actions of other mercs.",
	L"优点：自我锻炼或学习效率略高.\n缺点：减少对恐惧和火力压制的承受力.",// L"A: Slightly faster learning when assigned on practicing or as a student.\nD: Has lesser suppression and fear resistance.",
	L"优点：减少一切行动的体能消耗（除了医疗， 修理， 训练民兵和学习某种技能）.\n缺点：智力， 领导能力， 爆破， 修理和医疗技术提高得慢一些.",// L"A: His energy goes down a bit slower except on assignments as doctor, repairman, militia trainer or if learning certain skills.\nD: His wisdom, leadership, explosives, mechanical and medical skills improve slightly slower.",
	L"优点：点射/自动模式下命中率， 近战杀伤力和消灭敌人所得的时期更高.\n缺点： 需要耐心的行为会得到效率惩罚， 比如修理， 开锁， 解除陷阱， 医治和训练民兵.",// L"A: Has slightly better chance to hit on burst/autofire and inflicts slightly bigger damage in close combat\n    Gains a little more morale for killing.\nD: Has penalty for actions which needs patience like repairing items, picking locks, removing traps, doctoring, training militia.",
	L"优点：需要耐心的工作会得到效率奖励， 比如修理， 撬锁， 解除陷阱， 医治和训练民兵.\n缺点： 略微降低中断率.",// L"A: Has bonus for actions which needs patience like repairing items, picking locks, removing traps, doctoring and training militia.\nD: His interrupts chance is slightly lowered.",
	L"优点：增加对火力压制和恐惧的承受力，\n负伤其他雇佣兵阵亡对他的士气影响的也比较小.\n缺点： 容易成为敌人的移动靶.",// L"A: Incresed resistance to suppression and fear.\n    Morale loss for taking damage and companions deaths is lower for him.\nD: Can be hit easier and enemy penalty for moving target is lesser in his case.",
	L"优点：进行非战斗任务时士气会提升（除了训练民兵）.\n缺点： 杀人不增加士气.",// L"A: He gains morale when on non-combat assignments (except training militia).\nD: Gains no morale for killing.",
	L"优点：攻击有更高的几率能造成受害者属性值降低，和更严重的创伤， 同时提高自己的士气.\n缺点： 与其他人交流是个问题，脱离战斗后士气也会快速下沉.",// L"A: Has bigger chance for inflicting stat loss and can inflict special painful wounds when able to\n   Gains bonus morale for inflicting stat loss.\nD: Has penalty for communication with people and his morale sinks faster if not fighting.",
	L"优点：附近有异性雇佣兵时表现更佳.\n缺点： 附近所有同性雇佣兵士气提升得慢.",// L"A: Has better performance when there are some mercs of opposite gender nearby.\nD: Morale of other mercs of the same gender grows slower if nearby.",

};

STR16 gzIMPDisabilitiesHelpTexts[]=
{
	L"没有效果.",// L"No effects.",
	L"在热带和沙漠地区呼吸困难, 降低综合表现",// L"Has problems with breathing and reduced overall performance if in tropical or desert sectors.",
	L"在某些情况下孤单一人会造成恐慌.",// L"Can suffer panic attack if left alone in certain situations.",
	L"进入地下会降低他的综合表现.",// L"His overall performance is reduced if underground.",
	L"游泳时会轻易的溺水.",// L"If trying to swim he can easily drown.",
	L"看到大虫子便六神无主. 在热带地区也会降低他的综合表现",// L"A look at large insects can make a big problems\nand being in tropical sectors also reduce his performance a bit.",
	L"偶尔会忘记他手头的任务， 战斗中会损失行动点.",// L"Sometimes forgets what orders he got and therefore loses some APs if in combat.",
	L"偶尔发疯并且把手里的武器设在自动然后乱喷\n如果武器不能自动射击将会打击他的士气.",// L"He can go psycho and shoot like mad once per a while\nand can lose morale if unable to do that with given weapon.",

};



STR16 gzIMPProfileCostText[]=
{
	L"先生您消费 %d$. 要打包吗?",//L"The profile cost is %d$. Do you authorize the payment? ",
};

STR16 zGioNewTraitsImpossibleText[]=
{
	L"你在PROFEX组件被关闭的情况下无法选择新技能系统。请在JA2_Options.ini中检查READ_PROFILE_DATA_FROM_XML设定。",
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"你选择了铁人模式。这将会游戏变得相当有挑战性，因为你无法在敌人占据的分区存档。 这个设置会影响游戏的整个进程。你确认你要在铁人模式下进行游戏吗?",
};

STR16 gzDisplayCoverText[]=
{
	L"隐蔽程度: %d/100 %s, 光亮度: %d/100",
	L"武器射程: %d/%d 格, 命中率: %d/100",
	L"武器射程: %d/%d 格, 枪口稳定性: %d/100",
	L"关闭隐蔽程度显示",
	L"显示佣兵的视线",
	L"显示佣兵的隐蔽程度",
	L"树林", //本想用丛林, 但树林这词在德文中更短 (dschungel vs wald) // wanted to use jungle , but wood is shorter in german too (dschungel vs wald)
	L"城市",
	L"沙漠",
	L"雪地", // NOT USED!!!
	L"树林和沙漠",
	L"" // yes empty for now
};

#endif
