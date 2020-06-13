void afisare()
{
        if (!goon) {
            cout<<"No chance";
            return;
    }
        cout<<sol.size()<<'\n';
        for (int nod : sol)
            cout<<nod;
}
 
int hamilton(int crt, int pas, int npas, int fin) /// lant hamilton cu back
{
        viz[crt] = 1;
    sol.push_back(crt);
        if (pas == npas && fin == -1) return 1;
        if (pas == npas) return crt == fin;
        for (int y : graf[crt]) {
            if (viz[y] || !inc[y]) continue;
            if (pas+1 != npas && y == fin) continue;
            if (hamilton(y, pas+1, npas, fin))
                return 1;
            else {
                sol.pop_back();
                viz[y] = 0;
        }
    }
        return 0;
}
 
void buildSolution()
{
        for (int i = 0; i < compo.size() && goon; i++) {
            for (int y : compo[i])
                inc[y] = 1, viz[y] = 0;
            goon = hamilton(art[i], 0, compo[i].size()-1, art[i+1]);
            if (!sol.empty() && i+1 < compo.size()) sol.pop_back();
            for (int y : compo[i])
                inc[y] = 0;
    }
}
 
int main(){

        citire();
    biconex(e, 1);
        goon = prepare();
        buildSolution();
        afisare();
        return 0;
}
