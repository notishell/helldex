/* Copyright 2015 9x6.me. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Notis Hell (notishell@gmail.com)
 */
#ifndef SRC_LIST_H_
#define SRC_LIST_H_

#ifndef __cplusplus
extern "C" {
#endif

/**
 * class list head comment
 */
struct single_list {
	struct list *next;
};

struct single_list_head {
	int count;
	struct single_list list;
};

struct double_list {
	struct list *prev, *next;
};

struct double_list_head {
	int count;
	struct double_list list;
};

inline void init_single_list_head(struct single_list_head *head) {
	head->count = 0;
	head->list.next = &head->list;
}

inline void init_double_list_head(struct double_list_head *head) {
	head->count = 0;
	head->list.prev = &head->list;
	head->list.next = &head->list;
}
#ifndef __cplusplus
} /* extern "C" */
#endif

#endif /* SRC_LIST_H_ */
