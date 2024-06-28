#VAR1 <VAR2/VAR3.VAR4>
#VAR1 <VAR2/VAR5.VAR4>
#VAR1 <VAR6.VAR4>
#VAR1 <VAR7.VAR4>
int main(int argc, char *argv[])
{
 pid_t VAR8;
 int VAR9;
 char VAR10[10];
 VAR8 = FUN1();
 if (VAR8 == 0)
 {
 sleep(3);
 FUN2(0);
 }
 else if (VAR8 != -1)
 {
 FUN3(&VAR9);
 if (FUN4(VAR9))
 {
 /* BAD */
 VAR10[4105] = '';
 }
 }
 return 0;
}
