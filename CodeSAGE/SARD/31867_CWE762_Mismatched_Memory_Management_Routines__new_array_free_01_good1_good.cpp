#ifndef VAR1
class VAR2
{
 public:
 FUN1(char * VAR3)
 {
 this->VAR3 = new char[strlen(VAR3) + 1];
 strcpy(this->VAR3, VAR3);
 }
 ~FUN1()
 {
 delete [] VAR3;
 }
 FUN1(VAR2 &VAR4)
 {
 this->VAR3 = new char[strlen(VAR4.VAR3) + 1];
 strcpy(this->VAR3, VAR4.VAR3);
 }
 VAR2& operator=(const VAR2 &VAR4)
 {
 if (&VAR4 != this)
 {
 this->VAR3 = new char[strlen(VAR4.VAR3) + 1];
 strcpy(this->VAR3, VAR4.VAR3);
 }
 return *this;
 }
 void FUN2()
 {
 FUN3(VAR3);
 }
 private:
 char * VAR3;
};
static void FUN4()
{
 GoodClass FUN5 ("");
 VAR4.FUN2();
}
void FUN6()
{
 FUN4();
}
#endif
