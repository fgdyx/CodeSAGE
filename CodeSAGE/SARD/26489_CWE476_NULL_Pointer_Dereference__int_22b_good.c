#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(int * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if (VAR5 != NULL)
 {
 FUN3(*VAR5);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN4(int * VAR5)
{
 if(VAR3)
 {
 if (VAR5 != NULL)
 {
 FUN3(*VAR5);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN5(int * VAR5)
{
 if(VAR4)
 {
 FUN3(*VAR5);
 }
}
#endif
