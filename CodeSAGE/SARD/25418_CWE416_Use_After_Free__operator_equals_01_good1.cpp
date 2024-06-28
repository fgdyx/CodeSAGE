#VAR1 ""
namespace VAR2
{
#ifndef VAR3
class VAR4
{
 public:
 FUN1()
 {
 VAR5 = NULL;
 }
 FUN1(const char * VAR5)
 {
 if (VAR5)
 {
 this->VAR5 = new char[strlen(VAR5) + 1];
 strcpy(this->VAR5, VAR5);
 }
 else
 {
 this->VAR5 = new char[1];
 *(this->VAR5) = '';
 }
 }
 ~FUN1()
 {
 delete [] VAR5;
 }
 FUN1(VAR4 &VAR6)
 {
 this->VAR5 = new char[strlen(VAR6.VAR5)+1];
 strcpy(this->VAR5, VAR6.VAR5);
 }
 VAR4& operator=(const VAR4& VAR6)
 {
 if (this != &VAR6)
 {
 delete [] this->VAR5;
 this->VAR5 = new char[strlen(VAR6.VAR5)+1];
 strcpy(this->VAR5, VAR6.VAR5);
 }
 return *this;
 }
 char * VAR5;
};
static void FUN2()
{
 VAR4 FUN3("");
 VAR6 = VAR6;
 FUN4(VAR6.VAR5);
}
void FUN5()
{
 FUN2();
}
#endif
}
#ifdef VAR7
using namespace VAR2;
int main(int argc, char * argv[])
{
 srand( (unsigned)FUN6(NULL) );
#ifndef VAR3
 FUN4("");
 FUN5();
 FUN4("");
#endif
 return 0;
}
#endif
