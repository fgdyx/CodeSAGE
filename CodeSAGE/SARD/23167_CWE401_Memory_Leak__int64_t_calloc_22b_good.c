#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(VAR5 * VAR6)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 free(VAR6);
 }
}
void FUN3(VAR5 * VAR6)
{
 if(VAR3)
 {
 free(VAR6);
 }
}
void FUN4(VAR5 * VAR6)
{
 if(VAR4)
 {
 ;
 }
}
#endif
