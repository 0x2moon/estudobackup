#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;

int M = 15, N = 20;
int size = 32;    // cada sprite tem 16px
int w = size * N; // largura da janela
int h = size * M; // altura da janela

RenderWindow window(VideoMode(w, h), "Snake Game!");

int dir, num = 2; // tamanho da snake , var dir é a direção

// estrutura para as coordenadas da snake
struct Snake
{
    int x, y;
} s[100];

struct Fruit
{
    int x, y;
} f;

void Tick()
{
    // calda seguir a cabeca
    for (int i = num; i > 0; i--)
    {
        s[i].x = s[i - 1].x;
        s[i].y = s[i - 1].y;
    }

    // determinar para onde a snake deverá ir
    if (dir == 0)
        s[0].y += 1;
    if (dir == 1)
        s[0].x -= 1;
    if (dir == 2)
        s[0].x += 1;
    if (dir == 3)
        s[0].y -= 1;

    // qdo a snake ultrapassar os limites
    if (s[0].x >= N)
        s[0].x = 0;
    if (s[0].x <= 0)
        s[0].x = N;

    if (s[0].y >= M)
        s[0].y = 0;
    if (s[0].y <= 0)
        s[0].y = M;
    //
    // detectar colisao com a fruta
    if ((s[0].x == f.x) && (s[0].y == f.y))
    {
        num++;
        f.x = rand() % N;
        f.y = rand() % M;
    }
}

int main()
{
    srand(time(0));

    Texture t1, t2, t3;
    t1.loadFromFile("images/gram.png"); // background
    t2.loadFromFile("images/snaker.png");   // snake
    t3.loadFromFile("images/fruit.png"); // fruit

    Sprite sprite1(t1);
    Sprite sprite2(t2);
    Sprite sprite3(t3);

    Clock clock;
    float timer = 0, delay = 0.3; // delay eh a velocidade da snake

    // definir a posicao da 1 fruta
    f.x = rand() % N;
    f.y = rand() % M;

    while (window.isOpen())
    {

        float time = clock.getElapsedTime().asSeconds();
        clock.restart();
        timer += time;

        if (timer > delay)
        {
            timer = 0;
            Tick();
        }

        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
                window.close();
        }

        if (Keyboard::isKeyPressed(Keyboard::Left))
        {
            if (dir != 2)
                dir = 1;
        }
        if (Keyboard::isKeyPressed(Keyboard::Right))
        {
            if (dir != 1)
                dir = 2;
        }
        if (Keyboard::isKeyPressed(Keyboard::Up))
        {
            if (dir != 0)
                dir = 3;
        }
        if (Keyboard::isKeyPressed(Keyboard::Down))
        {
            if (dir != 3)
                dir = 0;
        }

        ///// DRAW //
        window.clear(); // limpar a janela
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                sprite1.setPosition(i * size, j * size); // setando a posição
                window.draw(sprite1);                    // desenho na janela
            }
        }

        // renderiza a snake
        for (int i = 0; i < num; i++)
        {
            sprite2.setPosition(s[i].x * size, s[i].y * size);
            window.draw(sprite2);
        }

        // render fruit
        sprite3.setPosition(f.x * size, f.y * size);
        window.draw(sprite3);

        window.display(); // mostra a janela renderizada
    }
    return 0;
}