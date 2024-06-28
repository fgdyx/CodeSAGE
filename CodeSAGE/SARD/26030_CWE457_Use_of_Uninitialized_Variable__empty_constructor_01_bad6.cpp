#VAR1 ""
namespace VAR2
{
#ifndef VAR3
class VAR4
{
 public:
 FUN1()
 {
 /* FLAW: Empty constructor with no initialization list, so intOne is not initialized */
 }
 int VAR5;
};
void FUN2()
{
 VAR4 * VAR6 = new VAR4;
 FUN3(VAR6->VAR5);
}
#endif
}
#ifdef VAR7
using namespace VAR2;
int main(int argc, char * argv[])
{
 srand( (unsigned)FUN4(NULL) );
#ifndef VAR3
 FUN5("");
 FUN2();
 FUN5("");
#endif
 return 0;
}
#endif
