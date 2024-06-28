#VAR1 ""
namespace VAR2
{
#ifndef VAR3
class VAR4
{
 public:
 FUN1(char * VAR5)
 {
 this->VAR5 = (char *)calloc(strlen(VAR5)+1, sizeof(char));
 strcpy(this->VAR5, VAR5);
 }
 ~FUN1()
 {
 free(VAR5);
 }
 FUN1(VAR4 &VAR6)
 {
 this->VAR5 = (char *) calloc(strlen(VAR6.VAR5)+1, sizeof(char));
 strcpy(this->VAR5, VAR6.VAR5);
 }
 VAR4& operator=(const VAR4 &VAR6)
 {
 if (&VAR6 != this)
 {
 this->VAR5 = (char *) calloc(strlen(VAR6.VAR5)+1, sizeof(char));
 strcpy(this->VAR5, VAR6.VAR5);
 }
 return *this;
 }
 void FUN2()
 {
 FUN3(VAR5);
 }
 private:
 char * VAR5;
};
static void FUN4()
{
 GoodClass FUN5 ("");
 VAR6.FUN2();
}
void FUN6()
{
 FUN4();
}
#endif
}
#ifdef VAR7
using namespace VAR2;
int main(int argc, char * argv[])
{
 srand( (unsigned)FUN7(NULL) );
#ifndef VAR3
 FUN3("");
 FUN6();
 FUN3("");
#endif
 return 0;
}
#endif
