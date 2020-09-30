#include <iostream>
#include <string>

int main()
{
    int Q = 0, W = 0, E = 0, R = 0, T = 0, Y = 0, U = 0, I = 0, O = 0,
            P = 0, A = 0, S = 0, D = 0, F = 0, G = 0, H = 0, J = 0, K = 0,
            L = 0, Z = 0, X = 0, C = 0, V = 0, B = 0, N = 0, M = 0;

    int n = 0;
    std::string text;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::string alph = "QWERTYUIOPASDFGHJKLZXCVBNM,.+-1234567890 ()";
    for (int i = 0; i < text.size(); i++)
        if (text[i] == 'Q')
            Q++;
        else if (text[i] == 'W')
            W++;
        else if (text[i] == 'E')
            E++;
        else if (text[i] == 'E')
            R++;
        else if (text[i] == 'R')
            T++;
        else if (text[i] == 'T')
            Y++;
        else if (text[i] == 'U')
            U++;
        else if (text[i] == 'I')
            I++;
        else if (text[i] == 'O')
            O++;
        else if (text[i] == 'P')
            P++;
        else if (text[i] == 'A')
            A++;
        else if (text[i] == 'S')
            S++;
        else if (text[i] == 'D')
            D++;
        else if (text[i] == 'F')
            F++;
        else if (text[i] == 'G')
            G++;
        else if (text[i] == 'H')
            H++;
        else if (text[i] == 'J')
            J++;
        else if (text[i] == 'K')
            K++;
        else if (text[i] == 'L')
            L++;
        else if (text[i] == 'Z')
            Z++;
        else if (text[i] == 'X')
            X++;
        else if (text[i] == 'C')
            C++;
        else if (text[i] == 'V')
            V++;
        else if (text[i] == 'B')
            B++;
        else if (text[i] == 'N')
            N++;
        else if (text[i] == 'M')
            M++;
    std::cout << "Amount of spells in your text: " << std::endl;
    std::cout << "Q = " << Q << ", W = " << W << ", E= " << E << ", R = " << R << "T = " << T << std::endl;
    std::cout << "Y = " << Y << ", U = " << U << ", I = " << I << ", O = " << O << ", P = " << P << std::endl;
    std::cout << "A = " << A << ", S = " << S << ", D = " << D << ", F = " << F << ", G = " << G << std::endl;
    std::cout << "H = " << H << ", J = " << J << ", K = " << K << ", L = " << L << ", Z = " << Z << std::endl;
    std::cout << "X = " << X << ", C = " << C << ", V = " << V << ", B = " << B << ", N = " << N << std::endl;
    std::cout << "M = " << M << ".";

    std::cout << "Frequency of spells in your text: " << std::endl;
    double q = (double) Q / text.length();
    double w = (double) w / text.length();
    double e = (double) E / text.length();
    double r = (double) R / text.length();
    double t = (double) T / text.length();
    double y = (double) Y / text.length();
    double u = (double) U / text.length();
    double i = (double) I / text.length();
    double o = (double) O / text.length();
    double p = (double) P / text.length();
    double a = (double) A / text.length();
    double s = (double) S / text.length();
    double d = (double) D / text.length();
    double f = (double) F / text.length();
    double g = (double) G / text.length();
    double h = (double) H / text.length();
    double j = (double) J / text.length();
    double k = (double) K / text.length();
    double l = (double) L / text.length();
    double z = (double) Z / text.length();
    double x = (double) X / text.length();
    double c = (double) C / text.length();
    double v = (double) v / text.length();
    double b = (double) B / text.length();
    double ab = (double) N / text.length();
    double m = (double) m / text.length();
    std::cout << "Q = " << q << ", W = " << w << ", E = " << e << ", R = " << r << ", T = " << t << std::endl;
    std::cout << "Y = " << y << ", U = " << u << ", I = " << i << ", O = " << o << ", P = " << p << std::endl;
    std::cout << "A = " << a << ", S = " << s << ", D = " << d << ", F = " << f << ", G = " << g << std::endl;
    std::cout << "H = " << h << ", J = " << j << ", K = " << k << ", L = " << l << ", Z = " << z << std::endl;
    std::cout << "X = " << x << ", C = " << c << ", V = " << v << ", B = " << b << ", N = " << ab << std::endl;
    std::cout << "M = " << m;
}