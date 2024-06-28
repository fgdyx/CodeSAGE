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
 if (VAR6 != NULL)
 {
 FUN3(VAR6->VAR7);
 delete VAR6;
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN4(VAR5 * VAR6)
{
 if(VAR3)
 {
 if (VAR6 != NULL)
 {
 FUN3(VAR6->VAR7);
 delete VAR6;
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN5(VAR5 * VAR6)
{
 if(VAR4)
 {
 FUN3(VAR6->VAR7);
 delete VAR6;
 }
}
#endif
