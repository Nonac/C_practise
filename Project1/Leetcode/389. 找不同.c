char findTheDifference(char* s, char* t) {
	char res = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		res ^= s[i];
		res ^= t[i];
	}
	res ^= t[strlen(s)];
	return res;
}