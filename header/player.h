#ifndef PLAYER_H
#define PLAYER_H
class Player{
    private:
        int hp=100;
        int atk=25;
    public:
        Player();
        int getHP();
        int getATK();
        void takeDamage(int dmg);
};
#endif