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
 if(VAR5 > 0)
 {
 if (VAR5 < (VAR6/2))
 {
 unsigned int VAR7 = VAR5 * 2;
 FUN3(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN4(unsigned int VAR5)
{
 if(VAR3)
 {
 if(VAR5 > 0)
 {
 if (VAR5 < (VAR6/2))
 {
 unsigned int VAR7 = VAR5 * 2;
 FUN3(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN5(unsigned int VAR5)
{
 if(VAR4)
 {
 if(VAR5 > 0)
 {
 unsigned int VAR7 = VAR5 * 2;
 FUN3(VAR7);
 }
 }
}
#endif
