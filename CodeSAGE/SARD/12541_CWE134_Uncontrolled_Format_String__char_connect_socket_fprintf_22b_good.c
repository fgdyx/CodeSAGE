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
 fprintf(VAR6, "", VAR5);
 }
}
void FUN3(char * VAR5)
{
 if(VAR3)
 {
 fprintf(VAR6, "", VAR5);
 }
}
void FUN4(char * VAR5)
{
 if(VAR4)
 {
 fprintf(VAR6, VAR5);
 }
}
#endif
