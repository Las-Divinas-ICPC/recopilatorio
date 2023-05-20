struct Node{
    map<char, int> next;
    bool end = false;
}

vector<Node> trie;
int currNode = 0;

int newNode {
    trie.pb(Node());
    return currNode++;
}

void add(string& s){
    int pt = 0;
    fore(i,0,sz(s)){
        if(!trie[pt].next.count(s[i]))
            trie[pt].next[s[i]] = newNode();
        pt = trie[pt].next[s[i]];
    }
    trie[pt].end = true;
}

void remove(string& s){
    int pt = 0;
    fore(i,0,sz(s)){
        if(!trie[pt].next.count(s[i]))
            return;
        pt = trie[pt].next[s[i]];
    }
    trie[pt].end = false;
}

bool find(string& s){
    int pt = 0;
    fore(i,0,sz(s)){
        if(!trie[pt].next.count(s[i]))
            return false;
        pt = trie[pt].next[s[i]];
    }
    return trie[pt].end;
}

int countPrefixes(string& s){
    int pt = 0;
    fore(i,0,sz(s)){
        if(!trie[pt].next.count(s[i]))
            return 0;
        pt = trie[pt].next[s[i]];
    }
    return trie[pt].prefixCount;
}

// Recorrer trie con dfs
void dfs(int pt = 0, string s = ""){
    if(trie[pt].end)
        cout << s << ENDL;

    for(auto i : trie[pt].next){
        s.pb(i.ff);
        dfs(i.ss, s);
        s.pop_back();
    }
}
