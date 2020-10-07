#include <iostream>
#include <string>
#include <vector>

int main()
{
    int Q = 0, W = 0, E = 0, R = 0, T = 0, Y = 0, U = 0, I = 0, O = 0,
            P = 0, A = 0, S = 0, D = 0, F = 0, G = 0, H = 0, J = 0, K = 0,
            L = 0, Z = 0, X = 0, C = 0, V = 0, B = 0, N = 0, M = 0;

    int n = 0;
    std::string text;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    for (int i = 0; i < text.size(); i++)
        if (text[i] == 'Q')
            Q++;
        else if (text[i] == 'W')
            W++;
        else if (text[i] == 'E')
            E++;
        else if (text[i] == 'R')
            R++;
        else if (text[i] == 'T')
            T++;
        else if (text[i] == 'Y')
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
    std::cout << "Q = " << Q << ", W = " << W << ", E= " << E << ", R = " << R << ", T = " << T << std::endl;
    std::cout << "Y = " << Y << ", U = " << U << ", I = " << I << ", O = " << O << ", P = " << P << std::endl;
    std::cout << "A = " << A << ", S = " << S << ", D = " << D << ", F = " << F << ", G = " << G << std::endl;
    std::cout << "H = " << H << ", J = " << J << ", K = " << K << ", L = " << L << ", Z = " << Z << std::endl;
    std::cout << "X = " << X << ", C = " << C << ", V = " << V << ", B = " << B << ", N = " << N << std::endl;
    std::cout << "M = " << M << "." << std::endl;

    std::cout << "Frequency of spells in your text: " << std::endl;
    double q = ((double) Q / text.length()) * 100;
    double w = ((double) W / text.length()) * 100;
    double e = ((double) E / text.length()) * 100;
    double r = ((double) R / text.length()) * 100;
    double t = ((double) T / text.length()) * 100;
    double y = ((double) Y / text.length()) * 100;
    double u = ((double) U / text.length()) * 100;
    double i = ((double) I / text.length()) * 100;
    double o = ((double) O / text.length()) * 100;
    double p = ((double) P / text.length()) * 100;
    double a = ((double) A / text.length()) * 100;
    double s = ((double) S / text.length()) * 100;
    double d = ((double) D / text.length()) * 100;
    double f = ((double) F / text.length()) * 100; 
    double g = ((double) G / text.length()) * 100;
    double h = ((double) H / text.length()) * 100;
    double j = ((double) J / text.length()) * 100;
    double k = ((double) K / text.length()) * 100; 
    double l = ((double) L / text.length()) * 100;
    double z = ((double) Z / text.length()) * 100;
    double x = ((double) X / text.length()) * 100;
    double c = ((double) C / text.length()) * 100; 
    double v = ((double) V / text.length()) * 100;
    double b = ((double) B / text.length()) * 100;
    double ab = ((double) N / text.length()) * 100;
    double m = ((double) M / text.length()) * 100;
    
    std::cout << "Q = " << q << ", W = " << w << ", E = " << e << ", R = " << r << ", T = " << t << std::endl;
    std::cout << "Y = " << y << ", U = " << u << ", I = " << i << ", O = " << o << ", P = " << p << std::endl;
    std::cout << "A = " << a << ", S = " << s << ", D = " << d << ", F = " << f << ", G = " << g << std::endl;
    std::cout << "H = " << h << ", J = " << j << ", K = " << k << ", L = " << l << ", Z = " << z << std::endl;
    std::cout << "X = " << x << ", C = " << c << ", V = " << v << ", B = " << b << ", N = " << ab << std::endl;
    std::cout << "M = " << m << std::endl;
    
    double per[27];
	per[0] = q; per[1] = w; per[2] = e; per[3] = r; per[4] = t; per[5] = y; per[6] = u; per[7] = i;
	per[8] = o; per[9] = p; per[10] = a; per[11] = s; per[12] = d; per[13] = f; per[14] = g;
	per[15] = h; per[16] = j; per[17] = k; per[18] = l; per[19] = z; per[20] = x;
	per[21] = c; per[22] = v; per[23] = b; per[24] = ab; per[25] = m;
	
    for (int i = 0; i < 27; i++)
    {
    	for (int j = 0; j < 27 - i - 1; j++)
    	if (per[j] > per[j + 1])
    	{
    		double swap = per[j];
    		per[j] = per[j + 1];
    		per[j + 1] = swap;
		}
	}
	for (int i = 0; i < 27; i++)
	std::cout << per[i] << " ";
	std::cout << std::endl;
}
