#VAR1 ""
namespace VAR2
{
#ifndef VAR3
class VAR4
{
 public:
 FUN1(const char *VAR5)
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
 void FUN2()
 {
 FUN3(VAR5);
 }
 FUN1(VAR4 &VAR6)
 {
 this->VAR5 = new char[strlen(VAR6.VAR5) + 1];
 strcpy(this->VAR5, VAR6.VAR5);
 }
 VAR4& operator=(const VAR4 &VAR6)
 {
 if (&VAR6 != this)
 {
 this->VAR5 = new char[strlen(VAR6.VAR5) + 1];
 strcpy(this->VAR5, VAR6.VAR5);
 }
 return *this;
 }
 private:
 char *VAR5;
};
static void FUN4()
{
 VAR4 FUN5("");
 VAR4 FUN6(VAR6);
 VAR7.FUN2();
}
void FUN7()
{
 FUN4();
}
#endif
}
#ifdef VAR8
using namespace VAR2;
int main(int argc, char * argv[])
{
 srand( (unsigned)FUN8(NULL) );
#ifndef VAR3
 FUN3("");
 FUN7();
 FUN3("");
#endif
 return 0;
}
#endif
