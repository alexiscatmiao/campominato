#ifndef PLAY_H
#define PLAY_H

void bare(field *battlefield, int width, int heigth, int x, int y, stack *history);
int flag(field *battlefield, int x, int y, int width, int heigth);
void rollback(field *battlefield, int rollback_target, stack *history, int width);
int win(field *f, int width, int heigth);
int loss(field *f, int width, int heigth);


#endif