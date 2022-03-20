void	~#ZeroOneZeroOneAZero~Gage_C_Toy_Stunt_Bike_Plugin(void)
{
	offset = 0;
	data = 0;
}

void	Score_Hack(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x02FA590, 0x0098967F);
	offset = 0;
	data = 0;
}

void	Imediatly_End_Match(void)
{
	if (is_pressed(0x00000201))
	{
		offset = 0x00000000;
		WRITEU32(offset + 0x02FA598, 0x00000003);
		offset = 0;
		data = 0;
	}
}
