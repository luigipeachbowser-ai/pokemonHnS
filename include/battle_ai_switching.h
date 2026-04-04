// Enhanced Battle AI Switching System
// This file provides comprehensive switching AI improvements based on threat assessment,
// type matchups, abilities, move coverage, and battle state analysis.

#ifndef GUARD_BATTLE_AI_SWITCHING_H
#define GUARD_BATTLE_AI_SWITCHING_H

// Enhanced switching scoring factors
#define SWITCH_SCORE_TYPE_RESIST_BONUS      30    // Resists opponent's STAB
#define SWITCH_SCORE_TYPE_WEAK_PENALTY      -40   // Weak to opponent's STAB  
#define SWITCH_SCORE_ABILITY_IMMUNITY       50    // Ability grants immunity (Flash Fire, etc.)
#define SWITCH_SCORE_ABILITY_ADVANTAGE      25    // Ability provides advantage (Intimidate, etc.)
#define SWITCH_SCORE_MOVE_COVERAGE_BONUS    20    // Has super effective move vs opponent
#define SWITCH_SCORE_HP_THRESHOLD_LOW       -15   // Low HP makes switching less appealing
#define SWITCH_SCORE_HP_THRESHOLD_CRITICAL  -30   // Critical HP  
#define SWITCH_SCORE_STAT_BOOST_PENALTY     -20   // Already boosted, don't want to lose boosts
#define SWITCH_SCORE_PREDICTION_BONUS       15    // Predicted opponent move coverage
#define SWITCH_SCORE_HAZARD_PENALTY         -10   // Entry hazards present

// Enhanced switching functions
u8 GetEnhancedMostSuitableMonToSwitchInto(void);
bool8 ShouldConsiderSwitching(void);
s32 CalculateSwitchScore(u8 monId, u8 opposingBattler);
bool8 HasTypeAdvantage(u8 monId, u8 opposingBattler);
bool8 HasAbilityAdvantage(u8 monId, u8 opposingBattler);
bool8 HasMoveAdvantage(u8 monId, u8 opposingBattler);
bool8 WouldSurviveOpponentMove(u8 monId, u8 opposingBattler);
u8 PredictOpponentBestMove(u8 opposingBattler);

#endif // GUARD_BATTLE_AI_SWITCHING_H