#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(int VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR6;
 int VAR7[10] = { 0 };
 if (VAR5 >= 0 && VAR5 < (10))
 {
 VAR7[VAR5] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN3(VAR7[VAR6]);
 }
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN4(int VAR5)
{
 if(VAR3)
 {
 {
 int VAR6;
 int VAR7[10] = { 0 };
 if (VAR5 >= 0 && VAR5 < (10))
 {
 VAR7[VAR5] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN3(VAR7[VAR6]);
 }
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN5(int VAR5)
{
 if(VAR4)
 {
 {
 int VAR6;
 int VAR7[10] = { 0 };
 if (VAR5 < 10)
 {
 VAR7[VAR5] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN3(VAR7[VAR6]);
 }
 }
 else
 {
 FUN2("");
 }
 }
 }
}
#endif
