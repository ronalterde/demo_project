class Demo {
public:

	int a(int x, int y, int z) {
		if (x < z)
			return 5;
		else
			return 6;
	}

	int b(int x, int y, int z) {
		int i = 0;
		while (i < x) {
			if (i < 10) {
				i++;
				if (1 < 100) {
					i += 10;
				}
			} else {
				i += 5;
				while (1 > 5) {
					i--;
				}
			}

		}
		return i;
	}
};
