vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

/*other version including LPS
    For pattern matching, finding all the occurrences of a substring P (of length m) in
a (long) string T (of length n), if any
*/
void LPSArray(char* pattern, int M, int* lps);
void KMPSearch(char* pattern, char* txt){
	int M = strlen(pattern);
	int N = strlen(txt);
	int lps[M];
	LPSArray(pattern, M, lps);
	int i = 0, j = 0; 
	while ((N - i) >= (M - j)) {
		if (pattern[j] == txt[i]) {j++; i++;}
		if (j == M) { 
            printf("Found pattern at index %d ", i - j);
			j = lps[j - 1];
		}
		else if (i < N && pattern[j] != txt[i]) {
			if (j != 0) j = lps[j - 1];
			else i = i + 1;
		}
	}
}
void LPSArray(char* pattern, int M, int* lps){
	int len = 0, i = 1; lps[0] = 0; 
	while (i < M) {
		if (pattern[i] == pattern[len]) { len++; lps[i] = len; i++; }
		else {
			if (len != 0) len = lps[len - 1];
			else { lps[i] = 0; i++;}
		}
	}
}

int main(){
	char txt[] = "ABCDABABCABAB";
	char pattern[] = "ABABCABAB";
	KMPSearch(pattern, txt);
	return 0;
}