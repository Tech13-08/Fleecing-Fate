#ifndef ENEMY_H
#define ENEMY_H
class Enemy{
    private:
        int hp=100;
        int atk=15;
    public:
        Enemy();
        int getHP();
        int getATK();
        void takeDamage(int dmg);
};
#endif