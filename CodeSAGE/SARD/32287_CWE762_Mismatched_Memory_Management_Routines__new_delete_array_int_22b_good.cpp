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
 delete VAR5;
 }
}
void FUN3(int * VAR5)
{
 if(VAR3)
 {
 delete VAR5;
 }
}
void FUN4(int * VAR5)
{
 if(VAR4)
 {
 delete [] VAR5;
 }
}
#endif
