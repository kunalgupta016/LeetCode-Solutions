class Robot {
public:

    int w,h;
    int x = 0,y=0;
    int dir = 0;

    vector<vector<int>> dirs{
        {1,0}, {0,1}, {-1,0}, {0,-1}
    };

    vector<string> dirname ={"East", "North", "West", "South"};
    

    Robot(int width, int height) {
        w = width;
        h = height;
    }
    
    void step(int num) {
        int cy = 2*(w+h)-4;
        num = num%cy;

        if(num==0 && x==0 && y==0){
            dir = 3;
            return;
        }

        while(num--){
            int dx = x+dirs[dir][0];
            int dy = y+dirs[dir][1];

            if(dx>=0 && dx<w && dy>=0 && dy<h){
                x = dx;
                y = dy;
            }
            else{
                dir = (dir+1)%4;
                num++;
            }

        }

    }
    
    vector<int> getPos() {
        return {x,y};
    }
    
    string getDir() {
        return dirname[dir];
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */