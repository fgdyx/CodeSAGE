#VAR1 ""
namespace VAR2
{
#ifndef VAR3
class VAR4
{
 public:
 FUN1() : FUN2(0)
 {
 }
 int VAR5;
};
static void FUN3()
{
 VAR4 * VAR6 = new VAR4;
 FUN4(VAR6->VAR5);
}
void FUN5()
{
 FUN3();
}
#endif
}
#ifdef VAR7
using namespace VAR2;
int main(int argc, char * argv[])
{
 srand( (unsigned)FUN6(NULL) );
#ifndef VAR3
 FUN7("");
 FUN5();
 FUN7("");
#endif
 return 0;
}
#endif
