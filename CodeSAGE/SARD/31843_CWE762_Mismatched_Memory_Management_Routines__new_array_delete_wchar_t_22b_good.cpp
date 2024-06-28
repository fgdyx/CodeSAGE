#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(wchar_t * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 delete [] VAR5;
 }
}
void FUN3(wchar_t * VAR5)
{
 if(VAR3)
 {
 delete [] VAR5;
 }
}
void FUN4(wchar_t * VAR5)
{
 if(VAR4)
 {
 delete VAR5;
 }
}
#endif
