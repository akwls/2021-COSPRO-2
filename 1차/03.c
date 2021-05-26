int func_a(int month, int day){
	int month_list[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int total = 0;
	for(int i = 0; i < month-1; i++)
		total +=  month_list[i];
	total +=  day;
	return total - 1;
}