// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

int firstBadVersion(int n) {
	extern bool isBadVersion(int version);
	if (isBadVersion(1)) return 1;
	int min = 1, max = n,mid;
	while (min < max)
	{
		mid = min/2 + max/ 2;
		if (isBadVersion(mid))
		{
			max = mid;
		}
		else {
			min = mid+1;
		}
	}
	return min;
}