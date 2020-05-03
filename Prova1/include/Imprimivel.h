#ifndef IMPRIMIVEL_H
#define IMPRIMIVEL_H


class Imprimivel
{
    public:
        Imprimivel();
        virtual ~Imprimivel();

        virtual void imprime() = 0;

    protected:

    private:
};

#endif // IMPRIMIVEL_H
