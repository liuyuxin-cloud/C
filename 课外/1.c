/*轻松通过墓碑，进入古墓后，才发现里面别有洞天。
突然，Yifenfei发现自己周围是黑压压的一群蝙蝠，个个扇动翅膀正准备一起向他发起进攻！
形势十分危急！
好在此时的yifenfei已经不是以前那个经常被lemon抢走MM的菜鸟了！面对众多蝙蝠的嗜血狂攻，只见yifenfei使出轻灵的剑法，刷，刷，刷，瞬间搞定……
现已知yifenfei使用了2招（剑招A和剑招B）：剑招A，一招能杀死一半的蝙蝠。但是如果当前的蝙蝠数为奇数，那么就必须先出一招剑招B杀死其中任意一个，使蝙蝠数为偶数，再出剑招A。
现在请问：杀死n只蝙蝠需要使出多少招剑招B？
*/
#include <stdio.h>
int main(void){
	int n; 
	scanf("%d",&n);
	while( n ){
		n--;
		int x;
		int i = 0 ;
		scanf("%d",&x);
		while( x )
		if( x % 2 ){
			x--;
			i++;
		}
		else {
			x /= 2; 
		}
		printf("%d\n",i);
		
	}
	
}
