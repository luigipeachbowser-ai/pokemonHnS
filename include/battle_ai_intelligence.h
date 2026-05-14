#ifndef GUARD_BATTLE_AI_INTELLIGENCE_H
#define GUARD_BATTLE_AI_INTELLIGENCE_H

#include "constants/battle_ai.h"

// AI Intelligence Tiers - Based on comprehensive AI documentation + Run&Bun research swap in logic
// Each tier represents different levels of strategic thinking

// Tier 0: Beginner AI (Basic trainers, wild Pokemon, early game)
#define AI_INTELLIGENCE_BEGINNER     (AI_SCRIPT_CHECK_BAD_MOVE)

// Tier 1: Basic AI (Route trainers, basic gym trainers)
#define AI_INTELLIGENCE_BASIC        (AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT)

// Tier 2: Intermediate AI (Experienced trainers, some gym leaders)
#define AI_INTELLIGENCE_INTERMEDIATE (AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY)

// Tier 3: Advanced AI (Strong trainers, Elite Four members)
#define AI_INTELLIGENCE_ADVANCED     (AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_SETUP_FIRST_TURN)

// Tier 4: Expert AI (Gym Leaders, Elite Four, Champions)
#define AI_INTELLIGENCE_EXPERT       (AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_RISKY | AI_SCRIPT_SWITCH_DECISION)

// Tier 5: Master AI (Champions, post-game bosses, legendary trainers)
#define AI_INTELLIGENCE_MASTER       (AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_RISKY | AI_SCRIPT_HP_AWARE | AI_SCRIPT_SWITCH_DECISION)

// Special AI combinations for specific trainer types

// Gym Leader AI - Emphasizes type strategy and setup
#define AI_INTELLIGENCE_GYM_LEADER   (AI_INTELLIGENCE_EXPERT)

// Elite Four AI - Maximum single battle intelligence
#define AI_INTELLIGENCE_ELITE_FOUR   (AI_INTELLIGENCE_MASTER)

// Champion AI - Ultimate single battle intelligence with all flags
#define AI_INTELLIGENCE_CHAMPION     (AI_INTELLIGENCE_MASTER)

// Rival AI - Adaptive intelligence that grows throughout the game
#define AI_INTELLIGENCE_RIVAL_EARLY  (AI_INTELLIGENCE_BASIC)
#define AI_INTELLIGENCE_RIVAL_MID    (AI_INTELLIGENCE_ADVANCED) 
#define AI_INTELLIGENCE_RIVAL_LATE   (AI_INTELLIGENCE_EXPERT)
#define AI_INTELLIGENCE_RIVAL_FINAL  (AI_INTELLIGENCE_MASTER)

// Team Rocket/Evil Team AI
#define AI_INTELLIGENCE_GRUNT        (AI_INTELLIGENCE_BASIC)
#define AI_INTELLIGENCE_ADMIN        (AI_INTELLIGENCE_ADVANCED)
#define AI_INTELLIGENCE_BOSS         (AI_INTELLIGENCE_EXPERT)

// Battle Facility AI
#define AI_INTELLIGENCE_FRONTIER     (AI_INTELLIGENCE_MASTER)

// Double Battle AI modifiers - add double battle flag to any tier
#define AI_DOUBLE_BATTLE_MOD         (AI_SCRIPT_DOUBLE_BATTLE)

// Convenience macros for double battles
#define AI_INTELLIGENCE_BASIC_DOUBLE        (AI_INTELLIGENCE_BASIC | AI_DOUBLE_BATTLE_MOD)
#define AI_INTELLIGENCE_INTERMEDIATE_DOUBLE (AI_INTELLIGENCE_INTERMEDIATE | AI_DOUBLE_BATTLE_MOD)
#define AI_INTELLIGENCE_ADVANCED_DOUBLE     (AI_INTELLIGENCE_ADVANCED | AI_DOUBLE_BATTLE_MOD)
#define AI_INTELLIGENCE_EXPERT_DOUBLE       (AI_INTELLIGENCE_EXPERT | AI_DOUBLE_BATTLE_MOD)
#define AI_INTELLIGENCE_MASTER_DOUBLE       (AI_INTELLIGENCE_MASTER | AI_DOUBLE_BATTLE_MOD)

#endif // GUARD_BATTLE_AI_INTELLIGENCE_H