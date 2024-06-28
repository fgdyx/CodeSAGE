#ifndef VAR1
class VAR2
{
 public:
 FUN1()
 {
 FUN2("");
 }
 /* FLAW: Non-virtual destructor - the destructor of the
 * derived class will not be called */
 ~FUN1()
 {
 FUN2("");
 }
};
class VAR3: public VAR2
{
 public:
 FUN3(const char * VAR4)
 {
 FUN2("");
 if (VAR4)
 {
 this->VAR4 = new char[strlen(VAR4) + 1];
 strcpy(this->VAR4, VAR4);
 FUN2(this->VAR4);
 }
 else
 {
 this->VAR4 = new char[1];
 *(this->VAR4) = '';
 }
 }
 ~FUN3()
 {
 FUN2("");
 delete [] VAR4;
 }
 FUN3(VAR3 &VAR5)
 {
 this->VAR4 = new char[strlen(VAR5.VAR4) + 1];
 strcpy(this->VAR4, VAR5.VAR4);
 }
 VAR3& operator=(const VAR3 &VAR5)
 {
 if (&VAR5 != this)
 {
 this->VAR4 = new char[strlen(VAR5.VAR4) + 1];
 strcpy(this->VAR4, VAR5.VAR4);
 }
 return *this;
 }
 private:
 char * VAR4;
};
void FUN4()
{
 VAR2 * VAR6 = new FUN3("");
 delete VAR6;
}
#endif
