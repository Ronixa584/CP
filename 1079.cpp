class Solution {
public:
    int numTilePossibilities(string tiles) {
        sort(tiles.begin(),tiles.end());
        int c=0;
        perm(tiles,c,0);
        return c;
    }

    void perm(string tiles,int &c,int i){
        for(int j=i;j<tiles.size();j++){
            if(i!=j && tiles[j]==tiles[i]) continue;
            swap(tiles[j],tiles[i]);
            c++;
            perm(tiles,c,i+1);
        }
    }
};
