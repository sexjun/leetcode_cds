[toc]

# 1. 语法特性

## 1.1 语言特性

### 1.1.1 c++

**常用头文件**

```c++
#include <unordered_map>
#include <iostream>
```





### 1.1.2  python 

- 常用头文件

```python
from typing import List
```

说明：

1. 在传入参数时，通过“参数名:类型”的形式声明参数的类型；
2. 返回结果通过“->结果类型”的形式声明结果的类型
3. 在调用的时候如果参数的类型不正确pycharm会有提醒，但不会影程序的运行。
4. 对于如list列表等，还可以规定更加具体一些，如“->List[str]”，规定返回的是列表，并且元素是字符串。

[参考博客链接](https://blog.csdn.net/weixin_34221073/article/details/88685704)

**enumerate**

- enumerate() 函数用于将一个可遍历的数据对象(如列表、元组或字符串)组合为一个索引序列，同时列出数据和数据下标，一般用在 for 循环当中.

```
seq = ['one', 'two', 'three']
for i, element in enumerate(seq):
    print(i, element)
```

- output:

```
0 one
1 two
2 three
```

**dict**

不允许同一个键出现两次。创建时如果同一个键被赋值两次，后一个值会被记住，如下实例：

```python
# init with no value
hashmap = dict()

# init with value
dict2 = { 'abc': 123, 98.6: 37 }


dict = {'Name': 'Runoob', 'Age': 7, 'Class': 'First'}
 
del dict['Name'] # 删除键 'Name'
dict.clear()     # 清空字典
del dict         # 删除字典

# the length of the dict
len(dict)
```

### 1.1.3 java



### 1.1.4 c





## 1.2 数据结构特性

### 1.2.1 数组



### 1.2.2 表



**`java hashtable`**



![image-20210828011848290](https://tu-chuang-1253216127.cos.ap-beijing.myqcloud.com/20210828011848.png)

```java
import java.util.HashMap; // 引入 HashMap 类

HashMap<Integer, String> Sites = new HashMap<Integer, String>();

// 添加键值对
        Sites.put(1, "Google");
        Sites.put(2, "Runoob");
        Sites.put(3, "Taobao");
        Sites.put(4, "Zhihu");
// 访问元素
System.out.println(Sites.get(3));

// 删除元素
Sites.remove(4);
// 删除所有键值对(key-value)
 Sites.clear();
// 计算大小
Sites.size()
    
// 迭代 HashMap
    // 输出 key 和 value
        for (Integer i : Sites.keySet()) {
            System.out.println("key: " + i + " value: " + Sites.get(i));
        }
        // 返回所有 value 值
        for(String value: Sites.values()) {
          // 输出每一个value
          System.out.print(value + ", ");
        }
```



**`cpp unordered_map`**

> cpp hashtable

以键值对（pair类型）的形式存储数据，存储的各个键值对的键互不相同且不允许被修改。



```c++
#include <unordered_map>
using namespace std;

// init with no value
std::unordered_map<std::string, std::string> umap;

// init with value
std::unordered_map<std::string, std::string> umap{
    {"Python教程","http://c.biancheng.net/python/"},
    {"Java教程","http://c.biancheng.net/java/"},
    {"Linux教程","http://c.biancheng.net/linux/"} };

// demo
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    //创建空 umap 容器
    unordered_map<string, string> umap;
    //向 umap 容器添加新键值对
    umap.emplace("Python教程", "http://c.biancheng.net/python/");
    umap.emplace("Java教程", "http://c.biancheng.net/java/");
    umap.emplace("Linux教程", "http://c.biancheng.net/linux/");
    //输出 umap 存储键值对的数量
    cout << "umap size = " << umap.size() << endl;
    //使用迭代器输出 umap 容器存储的所有键值对
    for (auto iter = umap.begin(); iter != umap.end(); ++iter) {
        cout << iter->first << " " << iter->second << endl;
    }
    return 0;
}

----------------------

umap size = 3
Python教程 http://c.biancheng.net/python/
Linux教程 http://c.biancheng.net/linux/
Java教程 http://c.biancheng.net/java/

```



| 成员方法           | 功能                                                         |
| ------------------ | ------------------------------------------------------------ |
| begin()            | 返回指向容器中第一个键值对的正向迭代器。                     |
| end()              | 返回指向容器中最后一个键值对之后位置的正向迭代器。           |
| cbegin()           | 和 begin() 功能相同，只不过在其基础上增加了 const 属性，即该方法返回的迭代器不能用于修改容器内存储的键值对。 |
| cend()             | 和 end() 功能相同，只不过在其基础上，增加了 const 属性，即该方法返回的迭代器不能用于修改容器内存储的键值对。 |
| empty()            | 若容器为空，则返回 true；否则 false。                        |
| size()             | 返回当前容器中存有键值对的个数。                             |
| max_size()         | 返回容器所能容纳键值对的最大个数，不同的操作系统，其返回值亦不相同。 |
| operator[key]      | 该模板类中重载了 [] 运算符，其功能是可以向访问数组中元素那样，只要给定某个键值对的键 key，就可以获取该键对应的值。注意，如果当前容器中没有以 key 为键的键值对，则其会使用该键向当前容器中插入一个新键值对。 |
| at(key)            | 返回容器中存储的键 key 对应的值，如果 key 不存在，则会抛出 out_of_range 异常。 |
| find(key)          | 查找以 key 为键的键值对，如果找到，则返回一个指向该键值对的正向迭代器；反之，则返回一个指向容器中最后一个键值对之后位置的迭代器（如果 end() 方法返回的迭代器）。 |
| count(key)         | 在容器中查找以 key 键的键值对的个数。                        |
| equal_range(key)   | 返回一个 pair 对象，其包含 2 个迭代器，用于表明当前容器中键为 key 的键值对所在的范围。 |
| emplace()          | 向容器中添加新键值对，效率比 insert() 方法高。               |
| emplace_hint()     | 向容器中添加新键值对，效率比 insert() 方法高。               |
| insert()           | 向容器中添加新键值对。                                       |
| erase()            | 删除指定键值对。                                             |
| clear()            | 清空容器，即删除容器中存储的所有键值对。                     |
| swap()             | 交换 2 个 unordered_map 容器存储的键值对，前提是必须保证这 2 个容器的类型完全相等。 |
| bucket_count()     | 返回当前容器底层存储键值对时，使用桶（一个线性链表代表一个桶）的数量。 |
| max_bucket_count() | 返回当前系统中，unordered_map 容器底层最多可以使用多少桶。   |
| bucket_size(n)     | 返回第 n 个桶中存储键值对的数量。                            |
| bucket(key)        | 返回以 key 为键的键值对所在桶的编号。                        |
| load_factor()      | 返回 unordered_map 容器中当前的负载因子。负载因子，指的是的当前容器中存储键值对的数量（size()）和使用桶数（bucket_count()）的比值，即 load_factor() = size() / bucket_count()。 |
| max_load_factor()  | 返回或者设置当前 unordered_map 容器的负载因子。              |
| rehash(n)          | 将当前容器底层使用桶的数量设置为 n。                         |
| reserve()          | 将存储桶的数量（也就是 bucket_count() 方法的返回值）设置为至少容纳count个元（不超过最大负载因子）所需的数量，并重新整理容器。 |
| hash_function()    | 返回当前容器使用的哈希函数对象。                             |

[参考博客链接](http://c.biancheng.net/view/7231.html)

# 经验

使用python类型：

```python
from typing import List
```