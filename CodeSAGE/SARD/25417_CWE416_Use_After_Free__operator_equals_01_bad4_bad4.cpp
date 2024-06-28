#ifndef VAR1
class VAR2
{
 public:
 FUN1()
 {
 VAR3 = NULL;
 }
 FUN1(const char * VAR3)
 {
 if (VAR3)
 {
 this->VAR3 = new char[strlen(VAR3) + 1];
 strcpy(this->VAR3, VAR3);
 }
 else
 {
 this->VAR3 = new char[1];
 *(this->VAR3) = '';
 }
 }
 ~FUN1()
 {
 delete [] VAR3;
 }
 FUN1(VAR2 &VAR4)
 {
 this->VAR3 = new char[strlen(VAR4.VAR3)+1];
 strcpy(this->VAR3, VAR4.VAR3);
 }
 VAR2& operator=(const VAR2& VAR4)
 {
 delete [] this->VAR3;
 this->VAR3 = new char[strlen(VAR4.VAR3)+1];
 strcpy(this->name, badClassObject.name); /* FLAW - if this is a self-assignment,
 badClassObject.name has already been deleted, so this is a use after free (CWE-416). */
 strcpy(this->VAR3, VAR4.VAR3);
 return *this;
 }
 char * VAR3;
};
void FUN2()
{
 VAR2 FUN3("");
 VAR4 = VAR4;
 FUN4(VAR4.VAR3);
}
#endif
