#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(char * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 char VAR6[100] = "";
 FUN3(VAR6, 100-1, "", VAR5);
 FUN2(VAR6);
 }
 }
}
void FUN4(char * VAR5)
{
 if(VAR3)
 {
 {
 char VAR6[100] = "";
 FUN3(VAR6, 100-1, "", VAR5);
 FUN2(VAR6);
 }
 }
}
void FUN5(char * VAR5)
{
 if(VAR4)
 {
 {
 char VAR6[100] = "";
 FUN3(VAR6, 100-1, VAR5);
 FUN2(VAR6);
 }
 }
}
#endif
