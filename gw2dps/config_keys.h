std::list<string> get_help_config_keys()
{
	std::list<string> config_keys;
	config_keys.push_back("Hotkeys.SELF_HEALTH_PERCENT");
	config_keys.push_back("Hotkeys.TARGET_SELECTED");
	config_keys.push_back("Hotkeys.TARGET_INFO");
	config_keys.push_back("Hotkeys.TARGET_LOCK");
	config_keys.push_back("Hotkeys.DPS_ALLOW_NEGATIVE");
	config_keys.push_back("Hotkeys.LOG_DPS");
	config_keys.push_back("Hotkeys.LOG_DPS_DETAILS");
	config_keys.push_back("Hotkeys.LOG_KILL_TIMER");
	config_keys.push_back("Hotkeys.LOG_KILL_TIMER_DETAILS");
	//ss << format("Kill Timer Writes to a File (Alt Num4)\n") % logKillTimerToFile;
	config_keys.push_back("Hotkeys.LOG_HITS");
	config_keys.push_back("Hotkeys.LOG_HITS_DETAILS");
	config_keys.push_back("Hotkeys.LOG_HITS_TO_FILE");
	config_keys.push_back("Hotkeys.LOG_ATTACK_RATE");
	config_keys.push_back("Hotkeys.LOG_ATTACK_RATE_DETAILS");
	config_keys.push_back("Hotkeys.LOG_ATTACK_RATE_TO_FILE");
	config_keys.push_back("Hotkeys.ATTACKRATE_CHAIN_HITS_MORE");
	config_keys.push_back("Hotkeys.ATTACKRATE_CHAIN_HITS_LESS");
	config_keys.push_back("Hotkeys.ALLIES_LIST");
	config_keys.push_back("Hotkeys.WVW_BONUS_MORE");
	config_keys.push_back("Hotkeys.WVW_BONUS_LESS");
	config_keys.push_back("Hotkeys.FLOAT_ALLY_NPC");
	config_keys.push_back("Hotkeys.FLOAT_ENEMY_NPC");
	config_keys.push_back("Hotkeys.FLOAT_ALLY_PLAYER");
	config_keys.push_back("Hotkeys.FLOAT_ENEMY_PLAYER");
	//ss << format("Count Siege (Alt 5)\n") % floatSiege;
	config_keys.push_back("Hotkeys.FLOAT_CIRCLES");
	config_keys.push_back("Hotkeys.FLOAT_TYPE");
	config_keys.push_back("Hotkeys.LOG_SPEEDOMETER");
	config_keys.push_back("Hotkeys.LOG_SPEEDOMETER_ENEMY");
	config_keys.push_back("Hotkeys.LOG_DISPLACEMENT");
	config_keys.push_back("Hotkeys.LOG_DISPLACEMENT_ENEMY");
	return config_keys;
}
