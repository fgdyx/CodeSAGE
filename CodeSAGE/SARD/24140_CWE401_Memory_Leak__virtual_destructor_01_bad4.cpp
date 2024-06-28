#VAR1 ""
namespace VAR2
{
#ifndef VAR3
class VAR4
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
class VAR5: public VAR4
{
 public:
 FUN3(const char * VAR6)
 {
 FUN2("");
 if (VAR6)
 {
 this->VAR6 = new char[strlen(VAR6) + 1];
 strcpy(this->VAR6, VAR6);
 FUN2(this->VAR6);
 }
 else
 {
 this->VAR6 = new char[1];
 *(this->VAR6) = '';
 }
 }
 ~FUN3()
 {
 FUN2("");
 delete [] VAR6;
 }
 FUN3(VAR5 &VAR7)
 {
 this->VAR6 = new char[strlen(VAR7.VAR6) + 1];
 strcpy(this->VAR6, VAR7.VAR6);
 }
 VAR5& operator=(const VAR5 &VAR7)
 {
 if (&VAR7 != this)
 {
 this->VAR6 = new char[strlen(VAR7.VAR6) + 1];
 strcpy(this->VAR6, VAR7.VAR6);
 }
 return *this;
 }
 private:
 char * VAR6;
};
void FUN4()
{
 VAR4 * VAR8 = new FUN3("");
 delete VAR8;
}
#endif
}
#ifdef VAR9
using namespace VAR2;
int main(int argc, char * argv[])
{
 srand( (unsigned)FUN5(NULL) );
#ifndef VAR3
 FUN2("");
 FUN4();
 FUN2("");
#endif
 return 0;
}
#endif
