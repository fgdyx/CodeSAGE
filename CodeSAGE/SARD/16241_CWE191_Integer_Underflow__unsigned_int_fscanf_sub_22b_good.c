#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(unsigned int VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if (VAR5 > 0)
 {
 unsigned int VAR6 = VAR5 - 1;
 FUN3(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN4(unsigned int VAR5)
{
 if(VAR3)
 {
 if (VAR5 > 0)
 {
 unsigned int VAR6 = VAR5 - 1;
 FUN3(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN5(unsigned int VAR5)
{
 if(VAR4)
 {
 {
 unsigned int VAR6 = VAR5 - 1;
 FUN3(VAR6);
 }
 }
}
#endif
