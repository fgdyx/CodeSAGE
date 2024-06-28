int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 17;
 VAR2 = 0;
 do
 {
 /* BAD */
 VAR3[17] = '';
 if (VAR2 >= VAR1) break;
 }
 while(++VAR2);
 return 0;
}
