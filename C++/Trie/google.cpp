
#include <bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 26;

// trie node
int count_ =0 ;

struct TrieNode
{
	vector<pair<struct TrieNode *,int>> children ;
    
	bool isEndOfWord;
};

// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void)
{
	struct TrieNode *pNode = new TrieNode;

	pNode->isEndOfWord = false;

	for (int i = 0; i < ALPHABET_SIZE; i++)
		pNode->children[i].first = NULL;

	return pNode;
}

void insert(struct TrieNode *root, string key)
{
	struct TrieNode *pCrawl = root;  

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - 'a';
		if (!pCrawl->children[index].first)
        {
			pCrawl->children[index].first = getNode();
             
        }   
        pCrawl->children[index].second++;  
        pCrawl = pCrawl->children[index].first;
        
	}

	// mark last node as leaf
	pCrawl->isEndOfWord = true;
}

// Returns true if key presents in trie, else
// false
void countall(struct TrieNode *root, string key)
{
	struct TrieNode *pCrawl = root;

	for (int i = 0; i < key.length(); i++)
	{

		int index = key[i] - 'a';
		// if (!pCrawl->children[index])
		// 	return false;

        count_ += (pCrawl->children.second);
		pCrawl = pCrawl->children[index].first;
	}
}

// Driver
int main()
{
    struct TrieNode *root= getNode();
    vector<string> st= {"srpre","uxfoz","ysyyq",
"gbwkf",
"ggxhr",
"uxwfn",
"ystmw",
"hqghu",
"effmz"};
	for(int i = 0 ; i < st.size() ; i++)
    {
       
            insert(root , st[i]);
        
    }

    for(int i = 0 ; i < st.size() ; i++)
    {
        countall(root , st[i]);
        cout<<count_-1<<" ";
        count_=0;
    }

    return 0;
}
 